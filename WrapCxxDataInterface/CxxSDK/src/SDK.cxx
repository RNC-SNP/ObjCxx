//
//  SDK.m
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#include "SDK.hxx"
#include "Manager.hxx"

static Manager* m;

IManager* SDK::getManager() {
    if (!m) {
        m = new Manager();
    }
    return m;
}

void SDK::setListener(IListener* lis) {
    if (lis) ((Manager*)getManager())->setListener(lis);
}
