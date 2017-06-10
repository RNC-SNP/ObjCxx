//
//  Cxx.cpp
//  BridgedCast
//
//  Created by RincLiu on 10/06/2017.
//  Copyright © 2017 RINC.XYZ. All rights reserved.
//

#include "Cxx.hpp"

Cxx::Cxx(void* objc, Interface interface) {
    this->objc = objc;
    this->interface = interface;
}

void Cxx::doInCxx(int x) {
    this->interface(this->objc, x);
}

//Cxx::~Cxx() {
//    delete this->objc;
//}
