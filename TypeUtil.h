//
//  TypeUtil.h
//
//  Created by RincLiu on 23/05/2017.
//  Copyright © 2017 RincLiu. All rights reserved.
//

#define NSString2STDString(nsStr) std::string([nsStr UTF8String])

#define STDString2NSString(stdStr) [NSString stringWithUTF8String:stdStr.c_str()]

#define STDString2NSData(stdStr) [NSData dataWithBytes:stdStr.data() length:stdStr.size()]]

#define chars2NSString(chars) [NSString stringWithCString:chars encoding:NSUTF8StringEncoding]

#define chars2NSData(chars) [[NSData alloc] initWithBytes:chars length:strlen(chars)]

#define NSString2NSData(nsStr) [nsStr dataUsingEncoding:NSUTF8StringEncoding]

#define NSData2NSString(nsData) [[NSString alloc] initWithData:nsData encoding:NSUTF8StringEncoding]

#define int2NSString(i) [NSString stringWithFormat:@"%d", i]
