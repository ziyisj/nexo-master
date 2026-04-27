#include "ResourceManager.h"
#include "Utils.h"
#include <iostream>
#include <vector>
#include <future>
#include <unordered_map>
#include "common/Data.h"

std::unordered_map<std::string, TextureInfo> GTextureMap = {};

void ResourceManager::LoadTextures(const std::string folderPath) {
    for (auto& file : std::filesystem::recursive_directory_iterator(folderPath)) {
        std::stringstream ss;
        ss << file;
        if (Utils::Contains(ResourceManager::TEXTURE_EXTENSIONS, ss.str().substr(ss.str().length() - 4, 3))) {
            sf::Texture Texture = sf::Texture();
            Texture.loadFromFile(ss.str().substr(1, ss.str().length() - 2));
            TextureInfo Info;
            Info.Texture = Texture;
            sf::Sprite Sprite;
            Sprite.setTexture(Info.Texture);
            Info.Sprite = Sprite;
            std::string key = ss.str().substr(1, ss.str().length() - 2);
            key = Utils::ReplaceAll(key.c_str(), "\\\\", "/");
            GTextureMap[key] = Info;
        }
    }
}

const TextureInfo* ResourceManager::GetTextureInfo(const std::string& key) {
    auto it = GTextureMap.find(key);
    if (it != GTextureMap.end()) {
        return &(it->second);
    }
    return nullptr;
}