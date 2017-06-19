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

#define MALLOC(type, length) reinterpret_cast<type>(std::malloc(length * sizeof(type)))

Byte* copyBytes(Byte* src, long length);

inline Byte* copyBytes(Byte* src, long length) {
    Byte* bytes = MALLOC(Byte*, length);
    std::memcpy(bytes, src, length);
    return bytes;
}

#endif
#endif
