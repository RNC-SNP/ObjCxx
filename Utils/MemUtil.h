//
//  TypeUtil.h
//
//  Created by RincLiu on 19/06/2017.
//  Copyright © 2017 RincLiu. All rights reserved.
//

#ifndef MemUtil_h
#define MemUtil_h

#include "cstring"
#include "cstdlib"
#include "string"

template<typename T>
inline T MALLOC(long length) {
    return reinterpret_cast<T>(std::malloc(length * sizeof(T)));
}

template<typename T>
inline T COPY(T src, long length) {
    T data = MALLOC<T>(length);
    std::memcpy(data, src, length);
    return data;
}

inline std::string copySTDStrFromNSData(NSData* data) {
    long size = [data length];
    Byte* bytes = COPY<Byte*>((Byte*)[data bytes], size);
    std::string str(reinterpret_cast<char const*>(bytes), size);
    return str;
}

inline NSData* copyNSDataFromSTDStr(std::string str) {
    long size = str.length();
    Byte* bytes = COPY<Byte*>((Byte*)str.c_str(), size);
    NSData *data = [NSData dataWithBytes:bytes length:size];
    return data;
}

#endif
