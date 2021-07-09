//
// Created by isaca on 7/8/2021.
//


#include <iostream>
#include <time.h>
#include <thread>
#include <chrono>

#include "lib/Plane.h"
#include "lib/Boat.h"
#include "lib/Car.h"


#define CARMAXSPEED 150
#define BOATMAXSPEED 75
#define PLANEMAXSPEED 500

#define NUMOFCITIES 10
std::string cities[NUMOFCITIES] = {"Hungary", "Brazil", "Jerusalem", "America", "Russia",
                                   "Moldova", "Japan", "Africa", "Spain", "Australia"};

int main(){
    srand(time(NULL));

    while(true){
        Transport *currentTrasport = nullptr;

        int origin = rand() % NUMOFCITIES, destination = origin;
        while(destination == origin){
            destination = rand() % NUMOFCITIES;
        }

        int type = rand() % 3,
            id = rand() % 100000;

        switch (type){
            case 0: currentTrasport = new Car(id, CARMAXSPEED, cities[origin], cities[destination]);
                    break;
            case 1: currentTrasport = new Plane(id, PLANEMAXSPEED, cities[origin], cities[destination]);
                    break;
            case 2: currentTrasport = new Boat(id, BOATMAXSPEED, cities[origin], cities[destination]);
                    break;
        }


        currentTrasport->move();
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

}
