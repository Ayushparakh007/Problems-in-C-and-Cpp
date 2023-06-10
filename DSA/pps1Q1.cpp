#include <iostream>
using namespace std;
class student{
    protected:
    int id;
    string name;
    public:
    void getstu(){
        cout<<"Enter id: "<<endl;
        cin>> id;
        cout<<"Enter Name: "<<endl;
        cin.ignore();
        getline(cin,name);

    }
    void putstu(){
        cout<< "ID:";
        cout<<id<<endl;
        cout<<"Name: ";
        cout<<name<<endl;
    }
};
class marks :public student{
    protected:
    int m1,m2,m3;
    public:
    void getmarks(){
    cout<<"Enter marks m1: ";
    cin>>m1;
    cout<<"Enter marks m2: ";
    cin>>m2;
    cout<<"Enter marks m3: ";
    cin>>m3;
    }
    void putmarks() {
        cout<<"Marks1: "<<m1<<endl;
        cout<< "Marks2: "<<m2<<endl;
         cout<< "Marks3: "<<m3<<endl;


    }
};
 class Result:public marks{
    private:
    int total;
    float average;
    public:
    void show(){
        total=m1+m2+m3;
        average= total/3;
         cout << "The total is: " << total << endl;
        cout << "The average is: " << average << endl;




    }


 };
 int main(){
    Result obj;
    obj.getstu();
    obj.getmarks();
    obj.putstu();
    obj.putmarks();
    obj.show();
    return 0;
}


 































































// #include <iostream>
// using namespace std;

// class Student {
// protected:
//     int id;
//     string name;

// public:
//     void getstu() {
//         cout << "Enter ID: ";
//         cin >> id;
//         cout << "Enter Name: ";
//         cin.ignore();
//         getline(cin, name);
//     }

//     void putstu() {
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//     }
// };

// class Marks : public Student {
// protected:
//     int m1, m2, m3;

// public:
//     void getmarks() {
//         cout << "Enter mark m1: ";
//         cin >> m1;
//         cout << "Enter mark m2: ";
//         cin >> m2;
//         cout << "Enter mark m3: ";
//         cin >> m3;
//     }

//     void putmarks() {
//         cout << "Mark1: " << m1 << endl;
//         cout << "Mark2: " << m2 << endl;
//         cout << "Mark3: " << m3 << endl;
//     }
// };

// class Result : public Marks {
// private:
//     int total;
//     float average;

// public:
//     void show() {
//         total = m1 + m2 + m3;
//         average = total / 3.0;
//         cout << "The total is: " << total << endl;
//         cout << "The average is: " << average << endl;
//     }
// };

// int main() {
//     Result obj;
//     obj.getstu();
//     obj.getmarks();
//     obj.putstu();
//     obj.putmarks();
//     obj.show();
//     return 0;
// }
