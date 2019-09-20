//
//  RLData.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "OCxxObj.h"

@interface RLData : OCxxObj

@property(nonatomic,strong) NSString* text;

-(void)print;

@end
