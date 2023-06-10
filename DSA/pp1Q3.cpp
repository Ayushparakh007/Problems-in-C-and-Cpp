#include <iostream>
using namespace std;
class DM;
class DB;
class DM{
    int m, cm;
    public:
    void get(){
        cout<<"Enter the value in meter and centimeter:"<<endl<<"Enter meter value: ";
        cin>>m;
        cout<<"Enter centimeter value: ";
        cin>>cm;
    }
    friend void add(DM &dm, DB &db);
};
class DB{
    int f, i;
    public:
    void get(){
        cout<<"Enter the value in feet and inches:"<<endl<<"Enter feet value: ";
        cin>>f;
        cout<<"Enter inches value: ";
        cin>>i;
    }
    friend void add(DM &dm, DB &db);
};
void add(DM &dm, DB &db){
    double final=dm.m+dm.cm*0.01+db.f*0.3+db.i*0.0254;
    cout<<"The summed value in meter is: "<<final<<endl;
}
int main(){
    DM dm;
    DB db;
    dm.get();
    db.get();
    add(dm, db);
    return 0;
}

