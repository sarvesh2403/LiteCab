#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
using namespace std;

struct Location {
    int x, y;
    double distanceFrom(Location other) const;
};

class Person {
protected:
    string name;
    int id;
public:
    Person(string name, int id);
    virtual void displayInfo() = 0;
};

class Rider : public Person {
public:
    vector<string> rideHistory;
    Rider(string name, int id);
    void displayInfo() override;
    void addRideToHistory(string ride);
};

class Driver : public Person {
public:
    Vehicle* vehicle;
    Location location;
    bool available;
    Driver(string name, int id, Vehicle* v, Location loc);
    void displayInfo() override;
};

#endif
