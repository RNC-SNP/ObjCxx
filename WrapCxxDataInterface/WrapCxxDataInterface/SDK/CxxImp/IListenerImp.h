//
//  IListenerImp.h
//  WrapCxxDataInterface
//
//  Created by Rinc Liu on 19/9/2019.
//  Copyright © 2019 RINC. All rights reserved.
//

#import "IListener.hxx"
#import "RLListener.h"

class IListenerImp : public IListener {
private:
    RLListener* oc;
public:
    IListenerImp(RLListener* oc) {this->oc = oc;}
    ~IListenerImp() override {oc = nil;}
    void onDataChanged(Data* data) override;
};
