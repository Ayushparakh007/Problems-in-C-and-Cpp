#include <iostream>
using namespace std;
class Rectangle {
private:
float length;
float width;
public:
Rectangle(float l, float w) {
length = l;
width = w;
}
float calculateArea() {
return length * width;
}
};
int main() {
float l, w;
cout << "Enter the length of the rectangle: ";
cin >> l;
cout << "Enter the width of the rectangle: ";
cin >> w;
Rectangle rect(l, w);
float area = rect.calculateArea();
if(area>0){
cout << "The area of the rectangle is: " << area << endl;
}
else{
    cout<<"invaild";
}
return 0;
}