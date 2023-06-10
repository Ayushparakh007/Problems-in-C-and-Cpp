#include <iostream>
#include <string>
using namespace std;
class Car {
private:
string make;
string model;
int year;
public:
// Method to set the car attributes
void setCarAttributes(string carMake, string carModel, int carYear) {
make = carMake;
model = carModel;
year = carYear;
}
// Method to print the car attributes
void printCarAttributes() {
cout << "Make: " << make << endl;
cout << "Model: " << model << endl;
if(year>=0){
cout << "Year: " << year << endl;
}
else{
    cout<<"Invaild";
}
}
};
int main() {
string make, model;
int year;
// Get input from the user

cout << "Enter the maker of the car: ";
getline(cin, make);
cout << "Enter the model of the car: ";
getline(cin, model);

cout << "Enter the year of the car: ";
cin >> year;
// Create an instance of the Car class
Car myCar;
// Set the car attributes
myCar.setCarAttributes(make, model, year);
// Print the car attributes
myCar.printCarAttributes();
return 0;
}