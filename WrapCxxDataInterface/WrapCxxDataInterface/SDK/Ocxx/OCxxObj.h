//
//  OCxxObj.h
//  TVSDeviceSDK
//
//  Created by Rinc Liu on 18/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OCxxObj :NSObject

-(instancetype)initWithCxx:(void*)cxx;

-(void*)cxx;

@end
