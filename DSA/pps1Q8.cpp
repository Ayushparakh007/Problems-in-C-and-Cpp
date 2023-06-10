#include <iostream>
using namespace std;
class Student{
    char name[100];
    int roll_no;
    public:
    void get_student_details(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll No: ";
        cin>>roll_no;
    }
    void print_student_details(){
        cout<<"Name: "<<name<<endl<<"Roll No: "<<roll_no<<endl;
    }
};
class Grade{
    int grade;
    public:
    void get_grade(){
        cout<<"Grade: ";
        cin>>grade;
    }
    void print_grade(){
        cout<<"Grade: "<<grade<<endl;
    }
};
class Junior: public Student{
    int marks;
    public:
    void get_junior_details(){
        get_student_details();
        cout<<"Marks: ";
        cin>>marks;
    }
void print_junior_details(){
        print_student_details();
        cout<<"Marks: "<<marks<<endl;
    }
};
class Senior: public Student, public Grade{
    public:
    void get_senior_details(){
        get_student_details();
        get_grade();
    }
    void print_senior_details(){
        print_student_details();
        print_grade();
    }
};
int main(){
    Senior s;
    s.get_senior_details();
    cout<<endl<<"Output:"<<endl;
    s.print_senior_details();
    return 0;
}
