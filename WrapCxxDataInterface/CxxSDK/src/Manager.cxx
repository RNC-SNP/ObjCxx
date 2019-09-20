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

std::string currentDatetimeStr(const char* format) {
    auto now = std::chrono::system_clock::now();
    auto dt = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&dt), format);
    return ss.str();
}

Manager::~Manager()  {
    std::cout << "#CXX# Manager released." << std::endl;
    if (this->lis) delete this->lis;
}

void Manager::work() {
    std::cout << "#CXX# Manager.work()" << std::endl;
    Data* d = new Data();
    d->text = currentDatetimeStr("%Y-%m-%d %X");
    if (this->lis) {
        this->lis->onDataChanged(d);
    }
}

void Manager::setListener(IListener* lis) {
    this->lis = lis;
}
