#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    double num1, num2;

    cout << "Enter the first number: ";
    if (!(cin >> num1)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    cout << "Enter the second number: ";
    if (!(cin >> num2)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    double sumOfSquares = (num1 * num1) + (num2 * num2);

    cout << "The sum of the squares is: " << sumOfSquares << endl;

    return 0;
}
