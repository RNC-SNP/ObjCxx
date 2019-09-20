//
//  IManager.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//
#ifndef IMANAGER_HXX
#define IMANAGER_HXX

class IManager {
public:
    virtual ~IManager() = default;
    virtual void work() = 0;
};

#endif
