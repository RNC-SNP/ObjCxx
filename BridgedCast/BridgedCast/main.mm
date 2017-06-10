//
//  main.m
//  BridgedCast
//
//  Created by RincLiu on 10/06/2017.
//  Copyright © 2017 RINC.XYZ. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Objc.h"
#include "Cxx.hpp"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        Objc* objc = [[Objc alloc]init];
        void* vp = (__bridge_retained void*)objc;
        Cxx* cxx = new Cxx(vp, objc.interface);
        cxx->doInCxx(9);
    }
    return 0;
}
