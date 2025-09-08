#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayType() = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void displayType() override;
};

class Bike : public Vehicle {
public:
    void displayType() override;
};

#endif
