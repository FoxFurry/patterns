//
// Created by isaca on 7/8/2021.
//

#ifndef FACTORY_METHOD_BOAT_H
#define FACTORY_METHOD_BOAT_H

#include "Transport.h"

class Boat: public Transport{
public:
    Boat(int _transportID, double _maxSpeed, std::string _origin, std::string _destination):
            Transport(_transportID,
                      _maxSpeed,
                      _origin,
                      _destination) {}

    void move();
};


#endif //FACTORY_METHOD_BOAT_H
