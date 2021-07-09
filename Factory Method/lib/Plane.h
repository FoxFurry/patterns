//
// Created by isaca on 7/8/2021.
//

#ifndef FACTORY_METHOD_PLANE_H
#define FACTORY_METHOD_PLANE_H

#include "Transport.h"

class Plane: public Transport{
public:
    Plane(int _transportID, double _maxSpeed, std::string _origin, std::string _destination):
            Transport(_transportID,
                      _maxSpeed,
                      _origin,
                      _destination) {}

    void move();
};


#endif //FACTORY_METHOD_PLANE_H
