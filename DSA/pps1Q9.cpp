#include <iostream>
using namespace std;
class Student{
    int rollno;
    public:
    void getdata(){
        cout<<"Enter rollno: ";
        cin>>rollno;
    }
    void putdata(){
        cout<<"RollNO: "<<rollno<<endl;
    }
};
class Test: public Student{
    protected:
    int mark1, mark2;
    public:
    void getmark(){
        cout<<"Enter marks1 and marks2:"<<endl;
        cin>>mark1>>mark2;
    }
    void putmark(){
        cout<<"Marks1: "<<mark1<<endl<<"Marks2: "<<mark2<<endl;
    }
};
class Grade{
    char grade;
    public:
    void getgrade(){
        cout<<"Enter Grade: ";
        cin>>grade;
    }
    void putgrade(){
        cout<<"Grade: "<<grade<<endl;
    }
};
class Result: public Test, public Grade{
    int total;
    public:
    void compute_total(){
        total = mark1 + mark2;
        if(total<=200 && total>=0){
        cout<<"Total: "<<total<<endl;

    }
    else{
        cout<<"Invaild";
    }
    }
};
int main(){
    Result r;
    r.getdata();
    r.getmark();
    r.getgrade();
    cout<<endl<<"Output:"<<endl;
    r.putdata();
    r.putmark();
    r.putgrade();
    r.compute_total();
      return 0;
}