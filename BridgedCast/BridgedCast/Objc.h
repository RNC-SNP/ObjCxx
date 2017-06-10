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

@property Callback callback;

-(void)doInObjc:(int)x;

@end
