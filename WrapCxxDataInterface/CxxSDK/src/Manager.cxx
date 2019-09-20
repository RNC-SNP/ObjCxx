//
//  Manager.m
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#include "Manager.hxx"
#include <iostream>
#include <chrono>
#include <ctime>
#include <sstream>
#include <iomanip>

std::string currentDatetimeStr() {
    auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %X");
    return ss.str();
}

Manager::~Manager()  {
    std::cout << "#CXX# Manager released." << std::endl;
    if (this->lis) delete this->lis;
}

void Manager::work() {
    std::cout << "#CXX# Manager.work()" << std::endl;
    Data* d = new Data();
    d->text = currentDatetimeStr();
    if (this->lis) {
        this->lis->onDataChanged(d);
    }
}

void Manager::setListener(IListener* lis) {
    this->lis = lis;
}
