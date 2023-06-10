#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int id;
    int age;
public:
    void Getstu() {
        cout << "Enter the Name:";
        cin.ignore();
        getline(cin, name);
        cout << "Enter the ID: ";
        cin >> id;
        cout << "Enter the Age: ";
        cin >> age;
    } 

    void Putstu() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Age: " << age << endl;
    }
};

class UnderGraduate : public Student {
protected:
    int ugCourses;

public:
    void GetUGCourses() {
        cout << "Enter the Number of UG courses offered: ";
        cin >> ugCourses;
    }
    void PutUGCourses() {
        cout << "Number of UG courses offered: " << ugCourses << endl;
    }
};

class PostGraduate : public Student {
protected:
    int pgCourses;

public:
    void GetPGCourses() {
        cout << "Enter the Number of PG courses offered: ";
        cin >> pgCourses;
    }

    void PutPGCourses() {
        cout << "Number of PG courses offered: " << pgCourses << endl;
    }
};

int main() {
    UnderGraduate u;
    u.Getstu();
    u.GetUGCourses();

    PostGraduate p;
    // p.Getstu();
    p.GetPGCourses();


    u.Putstu();
    u.PutUGCourses();

    // p.Putstu();
    p.PutPGCourses();

    return 0;
}
