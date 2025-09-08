#ifndef CAB_BOOKING_SYSTEM_H
#define CAB_BOOKING_SYSTEM_H

#include "Person.h"
#include "Vehicle.h"
#include <unordered_map>
#include <queue>

class CabBookingSystem {
private:
    std::unordered_map<int, Rider*> riders;
    std::unordered_map<int, Driver*> drivers;

public:
    void registerRider(Rider* rider);
    void registerDriver(Driver* driver);
    void bookRide(int riderId, Location riderLoc);
};

#endif
