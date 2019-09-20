//
//  Manager.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//
#ifndef MANAGER_HXX
#define MANAGER_HXX

#include "IManager.hxx"
#include "IListener.hxx"

class Manager : public IManager {
public:
    ~Manager() override;
    void work() override;
    void setListener(IListener* lis);
private:
    IListener* lis;
};

#endif
