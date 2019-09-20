//
//  main.m
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "RLSDK.h"
#import "MyListener.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        [RLSDK setListener:[MyListener new]];
        [[RLSDK getManager] work];
    }
    return 0;
}
