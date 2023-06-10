#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter an integer: ";
  cin >> num;

  // Check for invalid cases
  if (num < 0) {
    cout << "Invalid input" << endl;
    return 0;
  }

  // Check if the number is even or odd
  if (num % 2 == 0) {
    cout << num << " is an even number." << endl;
  } else {
    cout << num << " is an odd number." << endl;
  }

  return 0;
}




