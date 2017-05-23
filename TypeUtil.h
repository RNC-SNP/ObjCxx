//
//  TypeUtil.h
//
//  Created by RincLiu on 23/05/2017.
//  Copyright © 2017 RincLiu. All rights reserved.
//

#define NSString2STDString(nsStr) std::string([nsStr UTF8String])

#define STDString2NSString(stdStr) [NSString stringWithUTF8String:stdStr.c_str()]

#define int2NSString(i) [NSString stringWithFormat:@"%d", i]
