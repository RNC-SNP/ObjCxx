//
//  Objc.m
//  BridgedCast
//
//  Created by RincLiu on 10/06/2017.
//  Copyright © 2017 RINC.XYZ. All rights reserved.
//

#import "Objc.h"

void funcObjc(void* obj, int x) {
    [(__bridge_transfer Objc*)obj doInObjc:x];
}

@implementation Objc

-(id)init {
    if (self = [super init]) {
        self.interface = funcObjc;
    }
    return self;
}

-(void)doInObjc:(int)x {
    NSLog(@"doInObjc: %d", x);
}

@end
