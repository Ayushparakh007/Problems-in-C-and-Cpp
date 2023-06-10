#include <iostream>
#include <vector>
using namespace std;
class Car {
private:
string make;
string model;
int year;
double rentalPrice;
public:
Car(string make, string model, int year, double rentalPrice) {
this->make = make;
this->model = model;
this->year = year;
this->rentalPrice = rentalPrice;
}
double getRentalPrice() const {
return rentalPrice;
}
string getModel() const {
return model;
}
string getMake() const {
return make;
}
int getYear() const {
return year;
}
};
Car findCarWithHighestRentalPrice(const vector<Car>& fleet, string searchKey) {
double highestRentalPrice = 0.0;
Car highestRentalCar("", "", 0, 0.0);
for (const Car& car : fleet) {
if (searchKey == "model") {
if (car.getRentalPrice() > highestRentalPrice) {
highestRentalPrice = car.getRentalPrice();
highestRentalCar = car;
}
}
else if (searchKey == "make") {
if (car.getRentalPrice() > highestRentalPrice) {
highestRentalPrice = car.getRentalPrice();
highestRentalCar = car;
}
}
else if (searchKey == "year") {
if (car.getRentalPrice() > highestRentalPrice) {
highestRentalPrice = car.getRentalPrice();
highestRentalCar = car;
}
}
}
return highestRentalCar;
}
int main() {
vector<Car> fleet;
// Create car objects and add them to the fleet
Car car1("Toyota", "Camry", 2021, 50.0);
Car car2("Honda", "Accord", 2022, 60.0);
Car car3("Ford", "Mustang", 2020, 70.0);
fleet.push_back(car1);
fleet.push_back(car2);
fleet.push_back(car3);
// Calculate total rental price
double totalRentalPrice = 0.0;
for (const Car& car : fleet) {
totalRentalPrice += car.getRentalPrice();
}
cout << "Total rental price of all cars: $" << totalRentalPrice << endl;
// Find the car with the highest rental price based on user input
string searchKey;
cout << "Enter the search key (model/make/year): ";
cin >> searchKey;
Car highestRentalCar = findCarWithHighestRentalPrice(fleet, searchKey);
cout << "Car with the highest rental price:" << endl;
cout << "Make: " << highestRentalCar.getMake() << endl;
cout << "Model: " << highestRentalCar.getModel() << endl;
cout << "Year: " << highestRentalCar.getYear() << endl;
cout << "Rental Price: $" << highestRentalCar.getRentalPrice() << endl;
return 0;
}
