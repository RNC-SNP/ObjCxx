//
//  TypeUtil.h
//
//  Created by RincLiu on 19/06/2017.
//  Copyright © 2017 RincLiu. All rights reserved.
//

#ifndef MemUtil_h
#define MemUtil_h

#ifdef __cplusplus

#include "cstring"
#include "cstdlib"

template<typename T>
T MALLOC(long length);

template<typename T>
T COPY(T src, long length);


template<typename T>
T MALLOC(long length) {
    return reinterpret_cast<T>(std::malloc(length * sizeof(T)));
}

template<typename T>
inline T COPY(T src, long length) {
    T data = MALLOC<T>(length);
    std::memcpy(data, src, length);
    return data;
}

#endif
#endif
