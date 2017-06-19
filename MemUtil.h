#define MALLOC(type, length) reinterpret_cast<type>(malloc(length))

Byte* copyBytes(Byte* src, long length) {
    Byte* bytes = MALLOC(Byte*, length);
    memcpy(bytes, src, length);
    return bytes;
}
