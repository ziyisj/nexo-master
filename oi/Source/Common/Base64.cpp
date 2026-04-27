#include "base64.h"

std::string Base64::encode(const std::string& input) {
    BIO* b64 = BIO_new(BIO_f_base64());
    BIO* bmem = BIO_new(BIO_s_mem());
    b64 = BIO_push(b64, bmem);

    // 不添加换行符
    BIO_set_flags(b64, BIO_FLAGS_BASE64_NO_NL);

    // 写入数据
    BIO_write(b64, input.c_str(), input.length());
    BIO_flush(b64);

    // 获取编码后的数据
    BUF_MEM* bptr;
    BIO_get_mem_ptr(b64, &bptr);

    std::string result(bptr->data, bptr->length);

    // 清理
    BIO_free_all(b64);

    return result;
}

std::string Base64::decode(const std::string& input) {
    BIO* b64 = BIO_new(BIO_f_base64());
    BIO* bmem = BIO_new_mem_buf(input.c_str(), input.length());
    bmem = BIO_push(b64, bmem);

    // 不添加换行符
    BIO_set_flags(bmem, BIO_FLAGS_BASE64_NO_NL);

    // 分配输出缓冲区
    std::vector<char> buffer(input.length());

    // 解码
    int decoded_size = BIO_read(bmem, buffer.data(), input.length());

    // 清理
    BIO_free_all(bmem);

    if (decoded_size < 0) {
        return "";
    }

    return std::string(buffer.data(), decoded_size);
}

std::string Base64::encode_binary(const std::vector<unsigned char>& input) {
    return encode(std::string(input.begin(), input.end()));
}

std::vector<unsigned char> Base64::decode_binary(const std::string& input) {
    std::string decoded = decode(input);
    return std::vector<unsigned char>(decoded.begin(), decoded.end());
}