//
//  Cxx.hpp
//  BridgedCast
//
//  Created by RincLiu on 10/06/2017.
//  Copyright © 2017 RINC.XYZ. All rights reserved.
//

#ifndef Cxx_hpp
#define Cxx_hpp

#include <stdio.h>

#include "Interface.h"

class Cxx {
    void* objc;
    Interface interface;
public:
    Cxx();
    Cxx(void* objc, Interface interface);
    ~Cxx();
    void doInCxx(int x);
};

#endif /* Cxx_hpp */
