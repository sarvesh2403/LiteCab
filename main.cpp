#include "CabBookingSystem.h"

int main() {
    CabBookingSystem system;

    // Register drivers and riders
    system.registerDriver(new Driver("Alice", 1, new Car(), {2, 3}));
    system.registerDriver(new Driver("Bob", 2, new Bike(), {5, 1}));
    system.registerRider(new Rider("Charlie", 101));

    // Book a ride
    system.bookRide(101, {0, 0});

    return 0;
}
// Built a Cab Booking System (like a mini Uber) that can:

// Register drivers and riders

// Track each person’s info

// Book the nearest available cab using distance

// Track ride history

// Model different vehicle types (Car, Bike) using polymorphism

// All in modular, object-oriented C++ code.