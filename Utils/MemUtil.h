//
//  TypeUtil.h
//
//  Created by RincLiu on 19/06/2017.
//  Copyright © 2017 RincLiu. All rights reserved.
//

#ifndef MemUtil_h
#define MemUtil_h

#define MALLOC(type, length) reinterpret_cast<type>(malloc(length))

Byte* copyBytes(Byte* src, long length);

inline Byte* copyBytes(Byte* src, long length) {
    Byte* bytes = MALLOC(Byte*, length);
    memcpy(bytes, src, length);
    return bytes;
}

#endif
