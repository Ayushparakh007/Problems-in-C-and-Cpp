#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor with input validation
    Person(string personName, int personAge) {
        if (personName.empty() || personAge < 0) {
            cout << "Invalid input" << endl;
            name = "Unknown";
            age = 0;
        } else {
            name = personName;
            age = personAge;
        }
    }

    // Method to print the person's details
    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    string name;
    int age;

    cout << "Enter the person's name: ";
    getline(cin, name);

    cout << "Enter the person's age: ";
    cin >> age;

    // Create an instance of the Person class using the constructor
    Person person(name, age);

    cout << "Person's details:" << endl;
    person.printDetails();

    return 0;
}
