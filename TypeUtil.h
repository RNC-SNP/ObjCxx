//
//  TypeUtil.h
//
//  Created by RincLiu on 23/05/2017.
//  Copyright © 2017 RincLiu. All rights reserved.
//

#define NSStr2STDStr(nsStr) std::string([nsStr UTF8String])

#define STDStr2NSStr(stdStr) [NSString stringWithUTF8String:stdStr.c_str()]

#define STDStr2NSData(stdStr) [NSData dataWithBytes:stdStr.data() length:stdStr.size()]]

#define charP2NSStr(charP) [NSString stringWithCString:charP encoding:NSUTF8StringEncoding]

#define charP2NSData(charP) [[NSData alloc] initWithBytes:charP length:strlen(chars)]

#define charV2STDStr(charV) std::string(charV.begin(), charV.end())

#define NSStr2NSData(nsStr) [nsStr dataUsingEncoding:NSUTF8StringEncoding]

#define NSData2NSStr(nsData) [[NSString alloc] initWithData:nsData encoding:NSUTF8StringEncoding]

#define int2NSStr(i) [NSString stringWithFormat:@"%d", i]
