//
//  TypeUtil.h
//
//  Created by RincLiu on 23/05/2017.
//  Copyright © 2017 RincLiu. All rights reserved.
//

#ifndef TypeUtil_h
#define TypeUtil_h

#define STDStr2Int(str) std::atoi(str.c_str())

#define STDStr2Float(str) std::atof(str.c_str())

#define STDStr2Long(str) std::atol(str.c_str())

#define STDStr2LongLong(str) std::atoll(str.c_str())

#define NSStr2CharP(nsStr) (char*)[nsStr cStringUsingEncoding:NSUTF8StringEncoding]

#define NSStr2STDStr(nsStr) std::string([nsStr cStringUsingEncoding:NSUTF8StringEncoding])

#define STDStr2NSStr(stdStr) [NSString stringWithCString:stdStr.c_str() encoding:NSUTF8StringEncoding]

#define STDStr2NSData(stdStr) [NSData dataWithBytes:stdStr.data() length:stdStr.size()]]

#define charP2NSStr(charP) [NSString stringWithCString:charP encoding:NSUTF8StringEncoding]

#define charP2NSDataL(charP,len) [[NSData alloc] initWithBytes:charP length:len]

#define charP2NSData(charP) charP2NSDataL(charP,strlen(charP))

#define charV2STDStr(charV) std::string(charV.begin(), charV.end())

#define NSStr2NSData(nsStr) [nsStr dataUsingEncoding:NSUTF8StringEncoding]

#define NSData2NSStr(nsData) [[NSString alloc] initWithData:nsData encoding:NSUTF8StringEncoding]

#endif
