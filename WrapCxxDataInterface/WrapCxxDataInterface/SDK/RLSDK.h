//
//  RLSDK.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "RLListener.h"
#import "RLManager.h"

@interface RLSDK : NSObject

+(RLManager*)getManager;

+(void)setListener:(RLListener*)lis;

@end
