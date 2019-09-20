//
//  RLSDK.m
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "RLSDK.h"
#import "SDK.hxx"

static RLManager* manager;

@implementation RLSDK

+(RLManager*)getManager {
    if (!manager) {
        manager = [[RLManager alloc]initWithCxx:SDK::getManager()];
    }
    return manager;
}

+(void)setListener:(RLListener*)lis {
    if (lis) {
        SDK::setListener((IListener*)lis.cxx);
    }
}

@end
