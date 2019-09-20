//
//  IListenerImp.m
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "IListenerImp.h"
#import "TypeUtil.h"

void IListenerImp::onDataChanged(Data* data) {
    if (data) {
        RLData* md = [[RLData alloc]initWithCxx:data];
        md.text = STDStr2NSStr(data->text);
        [oc onDataChanged:md];
    }
}
