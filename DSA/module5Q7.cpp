#include <iostream>

using namespace std;

inline double area_of_circle(double radius) {
  return 3.14159265358979323846 * radius * radius;
}

int main() {
  double radius;

  cout << "Enter the radius of the circle: ";
  cin >> radius;
if(radius>0){
  double area = area_of_circle(radius);

  cout << "The area of the circle is " << area << endl;
}
else{
    cout<<"Invaild";
}

  return 0;
}
