//
// Created by isaca on 7/8/2021.
//

#ifndef PATTERNS_TRANSPORT_HPP
#define PATTERNS_TRANSPORT_HPP

#include <string>

class Transport {
protected:
    int transportID;
    double maxSpeed;
    std::string origin, destination;

    Transport(int _transportID, double _maxSpeed,
              std::string _origin,
              std::string _destination):    transportID(_transportID),
                                            maxSpeed(_maxSpeed),
                                            origin(_origin),
                                            destination(_destination) {}
public:
    virtual void move() = 0;

    // Getters
    double getMaxSpeed() { return maxSpeed; }
    std::string getOrigin() { return origin; }
    std::string getDestination() { return destination; }

    // Setters
    void setMaxSpeed(double _maxSpeed) { maxSpeed = _maxSpeed; }
    void setOrigin(std::string _origin) { origin = _origin; }
    void setDestination(std::string _destination) { destination = _destination; }
};


#endif //PATTERNS_TRANSPORT_HPP
