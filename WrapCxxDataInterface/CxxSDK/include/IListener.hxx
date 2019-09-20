//
//  Listener.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//
#ifndef ILISTENER_HXX
#define ILISTENER_HXX

#include "Data.hxx"

class IListener {
public:
    virtual ~IListener() = default;
    virtual void onDataChanged(Data* data) = 0;
};

#endif
