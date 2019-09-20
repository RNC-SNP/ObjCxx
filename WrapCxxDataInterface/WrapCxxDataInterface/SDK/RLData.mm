//
//  RLData.m
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "RLData.h"
#import "Data.hxx"
#import "TypeUtil.h"

@interface RLData() {
    Data* d;
}
@end

@implementation RLData

@synthesize text = _text;

-(instancetype)initWithCxx:(void*)cxx {
    if (self = [super initWithCxx:cxx]) {
        d = (Data*)cxx;
    }
    return self;
}

-(void*)cxx {
    return d;
}

-(void)dealloc {
    delete d;
}

-(void)setText:(NSString*)text {
    d->text = NSStr2STDStr(text);
}

-(NSString*)text {
    return STDStr2NSStr(d->text);
}

-(void)print {
    d->print();
}

@end
