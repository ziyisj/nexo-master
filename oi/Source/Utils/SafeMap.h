// SafeMap.h
#pragma once

#include <shared_mutex>
#include <unordered_map>
#include <optional>

template<typename K, typename V>
class SafeMap {
private:
    mutable std::shared_mutex Mutex_;
    std::unordered_map<K, V> Cache_;

public:
    // 获取和释放读锁
    void GetReadLock() const {
        Mutex_.lock_shared();
    }

    void ReleaseReadLock() const {
        Mutex_.unlock_shared();
    }

    // 获取和释放写锁
    void GetWriteLock() {
        Mutex_.lock();
    }

    void ReleaseWriteLock() {
        Mutex_.unlock();
    }

    // 获取底层map指针
    std::unordered_map<K, V>* Map() {
        return &Cache_;
    }

    SafeMap& operator=(const std::unordered_map<K, V>& other) {
        std::unique_lock<std::shared_mutex> Lock(Mutex_);
        Cache_ = other;
        return *this;
    }

    // 获取值
    V Get(const K& Key) const {
        std::shared_lock<std::shared_mutex> Lock(Mutex_);
        auto It = Cache_.find(Key);
        if (It != Cache_.end()) {
            return It->second;
        }
        return V();
    }

    // 获取值的指针
    V* GetPtr(const K& Key) {
        std::shared_lock<std::shared_mutex> Lock(Mutex_);
        auto It = Cache_.find(Key);
        if (It != Cache_.end()) {
            return &(It->second);
        }
        return nullptr;
    }

    // 设置键值对
    void Set(const K& Key, const V& Value) {
        std::unique_lock<std::shared_mutex> Lock(Mutex_);
        Cache_[Key] = Value;
    }

    // 获取所有键值对
    std::unordered_map<K, V> All() const {
        std::shared_lock<std::shared_mutex> Lock(Mutex_);
        return Cache_;
    }

    // 清空map
    void Clear() {
        std::unique_lock<std::shared_mutex> Lock(Mutex_);
        Cache_.clear();
    }

    // 删除指定键的值
    bool Remove(const K& Key) {
        std::unique_lock<std::shared_mutex> Lock(Mutex_);
        return Cache_.erase(Key) > 0;
    }

    // 获取大小
    size_t Size() const {
        std::shared_lock<std::shared_mutex> Lock(Mutex_);
        return Cache_.size();
    }

    // 判断是否为空
    bool Empty() const {
        std::shared_lock<std::shared_mutex> Lock(Mutex_);
        return Cache_.empty();
    }
};