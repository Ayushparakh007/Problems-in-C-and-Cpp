#include <iostream>
using namespace std;
class BankAccount{
    int acc_no;
    char name[100];
    int balance;
    public:
    void get_bank_details(){
        cout<<"Account number: ";
        cin>>acc_no;
        cout<<"Account holder name: ";
        cin>>name;  //only enter names with no whitespaces
        cout<<"Balance: ";
        cin>>balance;
    }
    void print_bank_details(){
        cout<<"Account number: "<<acc_no<<endl<<"Account holder name: "<<name<<endl<<"Balance: "<<balance<<endl;
    }
};
class SavingsAccount: public BankAccount{
    int interest_rate, min_balance;
    public:
    void get_savings_details(){
        get_bank_details();
        cout<<"Interest rate: ";
        cin>>interest_rate;
        cout<<"Minimum balance: ";
        cin>>min_balance;
    }
    void print_savings_details(){
        print_bank_details();
        cout<<"Interest rate: "<<interest_rate<<endl;
        if(min_balance>=5000){
        cout <<"Minimum balance: "<<min_balance<<endl;
        }
        else{
            cout<<"Error";
        }
  }
};
int main(){
    SavingsAccount s;
    s.get_savings_details();
    cout<<endl<<"Output:"<<endl;
    s.print_savings_details();
    return 0;
}

