//
// Created by isaca on 7/8/2021.
//

#include "Plane.h"
#include <iostream>

void Plane::move() {
    std::cout   << "The plane №" << transportID << " is flying from "
                << origin << " to " << destination << " with " << maxSpeed << "km\\h\n";
}