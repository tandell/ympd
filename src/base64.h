// https://nachtimwald.com/2017/11/18/base64-encode-and-decode-in-c/

#ifndef BASE64_H
#define BASE64_H

static const char b64chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
size_t b64_encoded_size(size_t inlen);
char *b64_encode(const unsigned char *in, size_t len);

#endif