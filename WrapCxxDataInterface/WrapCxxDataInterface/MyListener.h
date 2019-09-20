//
//  MyListener.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 20/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "RLListener.h"

NS_ASSUME_NONNULL_BEGIN

@interface MyListener : RLListener

-(void)onDataChanged:(RLData*)data;

@end

NS_ASSUME_NONNULL_END
