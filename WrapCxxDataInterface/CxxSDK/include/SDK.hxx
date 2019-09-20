//
//  SDK.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//
#ifndef SDK_HXX
#define SDK_HXX

#include "IListener.hxx"
#include "IManager.hxx"

class SDK {
public:
    static IManager* getManager();
    static void setListener(IListener* lis);
};

#endif
