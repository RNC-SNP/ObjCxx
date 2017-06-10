//
//  Cxx.cpp
//  BridgedCast
//
//  Created by RincLiu on 10/06/2017.
//  Copyright © 2017 RINC.XYZ. All rights reserved.
//

#include "Cxx.hpp"
#include "iostream"

Cxx::Cxx(void* objc, Callback callback) {
    this->objc = objc;
    this->callback = callback;
}

void Cxx::doInCxx(int x) {
    std::cout << "doInCxx: " << x << std::endl;
    this->callback(this->objc, x);
}

//Cxx::~Cxx() {
//    delete this->objc;
//}
