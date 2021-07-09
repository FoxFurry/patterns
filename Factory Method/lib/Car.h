//
// Created by isaca on 7/8/2021.
//

#ifndef FACTORY_METHOD_CAR_H
#define FACTORY_METHOD_CAR_H

#include "Transport.h"

class Car: public Transport{
public:
    Car(int _transportID, double _maxSpeed, std::string _origin, std::string _destination):
                                Transport(_transportID,
                                          _maxSpeed,
                                          _origin,
                                          _destination) {}

    void move();
};


#endif //FACTORY_METHOD_CAR_H
