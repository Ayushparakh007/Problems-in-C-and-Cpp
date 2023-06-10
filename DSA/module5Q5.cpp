#include <iostream>
using namespace std;
class Rectangle {
private:
double length;
double width;
public:
// Constructor
Rectangle(double l, double w) {
length = l;
width = w;
}
// Method to calculate and return the area of the rectangle
double getArea() {
return length * width;
}
// Method to calculate and return the perimeter of the rectangle
double getPerimeter() {
return 2 * (length + width);
}
};
int main() {
double l, w;
cout << "Enter the length of the rectangle: ";
cin >> l;
cout << "Enter the width of the rectangle: ";
cin >> w;
Rectangle rect(l, w);
// Calculate and display the area
if (l>=0 && w>=0){
double area = rect.getArea();
cout << "The area of the rectangle is: " << area << endl;
// Calculate and display the perimeter
double perimeter = rect.getPerimeter();
cout << "The perimeter of the rectangle is: " << perimeter << endl;
}
else{
    cout<<"Invaild";
}
return 0;
}