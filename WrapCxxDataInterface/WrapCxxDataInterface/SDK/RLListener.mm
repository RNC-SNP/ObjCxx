//
//  RLListener.m
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "RLListener.h"
#import "IListenerImp.h"

@implementation RLListener

-(instancetype)init {
    if (self = [super init]) {
        cxx = new IListenerImp(self);
    }
    return self;
}

-(void)dealloc {
    delete (IListenerImp*)cxx;
}

-(void)onDataChanged:(RLData *)data {
}

@end
