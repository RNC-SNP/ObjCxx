//
//  TypeUtil.h
//
//  Created by RincLiu on 23/05/2017.
//  Copyright © 2017 RincLiu. All rights reserved.
//

#define NSStr2CharPA(nsStr) (unsigned char*)[nsStr cStringUsingEncoding:NSNonLossyASCIIStringEncoding]

#define NSStr2CharPU(nsStr) (char*)[nsStr cStringUsingEncoding:NSUTF8StringEncoding]

#define NSStr2STDStrA(nsStr) std::string([nsStr cStringUsingEncoding:NSNonLossyASCIIStringEncoding])

#define NSStr2STDStrU(nsStr) std::string([nsStr cStringUsingEncoding:NSUTF8StringEncoding])

#define STDStr2NSStrA(stdStr) [NSString stringWithCString:stdStr.c_str() encoding:NSASCIIStringEncoding]

#define STDStr2NSStrU(stdStr) [NSString stringWithCString:stdStr.c_str() encoding:NSUTF8StringEncoding]

#define STDStr2NSData(stdStr) [NSData dataWithBytes:stdStr.data() length:stdStr.size()]]

#define charP2NSStrA(charP) [NSString stringWithCString:charP encoding:NSASCIIStringEncoding]

#define charP2NSStrU(charP) [NSString stringWithCString:charP encoding:NSUTF8StringEncoding]

#define charP2NSData(charP) [[NSData alloc] initWithBytes:charP length:strlen(chars)]

#define charV2STDStr(charV) std::string(charV.begin(), charV.end())

#define NSStr2NSDataA(nsStr) [nsStr dataUsingEncoding:NSASCIIStringEncoding]

#define NSStr2NSDataU(nsStr) [nsStr dataUsingEncoding:NSUTF8StringEncoding]

#define NSData2NSStrA(nsData) [[NSString alloc] initWithData:nsData encoding:NSASCIIStringEncoding]

#define NSData2NSStrU(nsData) [[NSString alloc] initWithData:nsData encoding:NSUTF8StringEncoding]
