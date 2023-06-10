#include <iostream>

// Base class: Vehicle
class Vehicle {
protected:
    double maxSpeed;
    double currentSpeed;

public:
    Vehicle(double maxSpeed = 0.0, double currentSpeed = 0.0)
        : maxSpeed(maxSpeed), currentSpeed(currentSpeed) {}

    void accelerate(double acceleration) {
        currentSpeed += acceleration;
        if (currentSpeed > maxSpeed)
            currentSpeed = maxSpeed;
    }

    void decelerate(double deceleration) {
        currentSpeed -= deceleration;
        if (currentSpeed < 0)
            currentSpeed = 0;
    }

    double getCurrentSpeed() {
        return currentSpeed;
    }
};

// Derived class: Car
class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(double maxSpeed = 0.0, double currentSpeed = 0.0, int numDoors = 0)
        : Vehicle(maxSpeed, currentSpeed), numDoors(numDoors) {}

    int getNumDoors() {
        return numDoors;
    }
};

// Derived class: Airplane
class Airplane : public Vehicle {
private:
    double altitude;

public:
    Airplane(double maxSpeed = 0.0, double currentSpeed = 0.0, double altitude = 0.0)
        : Vehicle(maxSpeed, currentSpeed), altitude(altitude) {}

    void climb(double meters) {
        altitude += meters;
    }

    void descend(double meters) {
        altitude -= meters;
        if (altitude < 0)
            altitude = 0;
    }

    double getAltitude() {
        return altitude;
    }
};

// Example usage
int main() {
    Car myCar(200.0, 0.0, 4);
    Airplane myAirplane(800.0, 0.0, 5000.0);

    myCar.accelerate(50.0);
    myAirplane.accelerate(200.0);

    std::cout << "Car Speed: " << myCar.getCurrentSpeed() << std::endl;
    std::cout << "Airplane Speed: " << myAirplane.getCurrentSpeed() << std::endl;

    std::cout << "Car Doors: " << myCar.getNumDoors() << std::endl;
    std::cout << "Airplane Altitude: " << myAirplane.getAltitude() << std::endl;

    return 0;
}



