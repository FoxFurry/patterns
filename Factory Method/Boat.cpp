//
// Created by isaca on 7/8/2021.
//

#include "Boat.h"
#include <iostream>

void Boat::move() {
    std::cout   << "The boat №" << transportID << " is sailing from "
                << origin << " to " << destination << " with " << maxSpeed << " knots\n";
}