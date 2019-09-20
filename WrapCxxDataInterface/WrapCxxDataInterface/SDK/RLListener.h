//
//  RLListener.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//
#import "OCxxImp.h"
#import "RLData.h"

@interface RLListener : OCxxImp

-(void)onDataChanged:(RLData*)data;

@end
