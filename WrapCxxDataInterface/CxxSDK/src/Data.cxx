//
//  Data.cpp
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 20/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#include "Data.hxx"

Data::Data() {
    std::cout << "#CXX# Data.Data()" << std::endl;
}

void Data::print() {
    std::cout << "#CXX# Data.print() text: " << this->text << std::endl;
}
