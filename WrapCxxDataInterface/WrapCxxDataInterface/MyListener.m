//
//  MyListener.m
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 20/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "MyListener.h"

@implementation MyListener

-(void)onDataChanged:(RLData*)data {
    NSLog(@"#OC# data changed: %@", data.text);
    [data print];
}

@end
