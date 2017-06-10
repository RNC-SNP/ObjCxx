//
//  Objc.h
//  BridgedCast
//
//  Created by RincLiu on 10/06/2017.
//  Copyright © 2017 RINC.XYZ. All rights reserved.
//

#import <Foundation/Foundation.h>

#include "Interface.h"

@interface Objc : NSObject

@property Interface interface;

-(void)doInObjc:(int)x;

@end
