# LiteCab 🚖

**LiteCab** is a modular, object-oriented C++ cab booking system inspired by Uber Lite. It simulates core ride-hailing features including driver and rider registration, nearest ride booking, vehicle polymorphism, and ride history tracking — all through a console interface.

---

## Features

- 👤 **User Management**: Register drivers and riders with unique IDs  
- 🚗 **Vehicle Polymorphism**: Model different vehicle types (**Car** and **Bike**) using OOP principles  
- 📍 **Smart Matching**: Book the nearest available cab based on rider location  
- 📜 **Ride History**: Maintain comprehensive ride history for all users  
- 💻 **Clean Architecture**: Written in modular C++ using object-oriented design patterns  

---

## Getting Started

### Prerequisites

- C++ compiler supporting C++11 or above (e.g., `g++`, `clang++`, `Visual Studio`)
- Make (optional, for build automation)

### Build & Run

**Quick Start:**
```bash
# Clone the repository
git clone https://github.com/sarvesh2403/LiteCab.git
cd LiteCab

# Compile (all files in root directory)
g++ -std=c++11 -o LiteCab *.cpp
./LiteCab
```

**With Make (if Makefile provided):**
```bash
make
./LiteCab
```

---

## Project Structure

```
LiteCab/
├── Person.h                        # Person, Rider, Driver classes + Location struct
├── Vehicle.h                       # Vehicle base class, Car, Bike implementations
├── CabBookingSystem.h             # Main system controller class
├── main.cpp                       # Entry point and demo usage
├── README.md
└── LICENSE
```

---

## How It Works

### 1. **System Initialization**
The `CabBookingSystem` manages all drivers, riders, and active rides.

### 2. **User Registration**
```cpp
// Register a driver with vehicle and location
system.registerDriver(new Driver("Alice", 1, new Car(), {2, 3}));
system.registerDriver(new Driver("Bob", 2, new Bike(), {5, 1}));

// Register a rider  
system.registerRider(new Rider("Charlie", 101));
```

### 3. **Booking Process**
- Rider requests a ride from their current location
- System finds nearest available driver
- Ride is created and driver status updated
- Trip details stored in ride history

### 4. **Vehicle Polymorphism**
```cpp
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
```

---

## Usage Example

```cpp
int main() {
    CabBookingSystem system;
    
    // Register drivers with vehicles and locations
    system.registerDriver(new Driver("Alice", 1, new Car(), {2, 3}));
    system.registerDriver(new Driver("Bob", 2, new Bike(), {5, 1}));
    
    // Register a rider
    system.registerRider(new Rider("Charlie", 101));
    
    // Book a ride from location {0, 0}
    system.bookRide(101, {0, 0});
    
    return 0;
}
```

---

## Key Classes & Architecture

| Class/Struct | Description |
|--------------|-------------|
| `Location` | Simple coordinate struct with distance calculation |
| `Person` | Abstract base class for all users (drivers & riders) |
| `Rider` | User who books rides, maintains ride history vector |
| `Driver` | Service provider with vehicle, location, and availability status |
| `Vehicle` | Abstract base class for transportation types |
| `Car/Bike` | Concrete vehicle implementations with type display |
| `CabBookingSystem` | Main controller using hash maps for user management |

### Core Data Structures:
- **Hash Maps**: `unordered_map<int, Driver*>` and `unordered_map<int, Rider*>` for O(1) user lookup
- **Location System**: Integer-based coordinates with Euclidean distance calculation  
- **Ride History**: Vector of strings tracking past trips per rider

---

## Future Enhancements

- 🖥️ **GUI Interface**: Replace console with modern UI
- 🗺️ **Real-time Tracking**: Dynamic driver location updates  
- 💰 **Fare Calculator**: Distance and time-based pricing
- 🚦 **Route Optimization**: Integration with mapping APIs
- 📊 **Analytics Dashboard**: Trip statistics and insights
- 🔐 **Authentication**: User login and security features
- 📱 **Mobile App**: iOS/Android companion apps

---

## Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit changes (`git commit -m 'Add AmazingFeature'`)
4. Push to branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Author

👤 **Sarvesh Hampali**
- GitHub: [@sarvesh2403](https://github.com/sarvesh2403)
- LinkedIn: [Sarvesh Hampali](https://www.linkedin.com/in/sarvesh-hampali-25938725a)
- Email: sarveshhampali@gmail.com

---

## Acknowledgments

- Inspired by ride-hailing services like Uber and Lyft
- Built as a learning project for C++ OOP concepts
- Thanks to the C++ community for best practices and guidance

---

**⭐ Star this repo if you found it helpful!**

**Happy Coding! 🚖💨**
