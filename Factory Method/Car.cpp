//
// Created by isaca on 7/8/2021.
//

#include "Car.h"
#include <iostream>

void Car::move() {
    std::cout   << "The car №" << transportID << " is moving from "
                << origin << " to " << destination << " with " << maxSpeed << "km\\h\n";
}