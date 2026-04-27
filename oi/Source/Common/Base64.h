#ifndef BASE64_H
#define BASE64_H

#include <string>
#include <vector>
#include <openssl/bio.h>
#include <openssl/evp.h>
#include <openssl/buffer.h>

class Base64 {
public:
    // Base64 编码
    static std::string encode(const std::string& input);

    // Base64 解码
    static std::string decode(const std::string& input);

    // 处理二进制数据的编码
    static std::string encode_binary(const std::vector<unsigned char>& input);

    // 处理二进制数据的解码
    static std::vector<unsigned char> decode_binary(const std::string& input);
};

#endif // BASE64_H