
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empNumber;
    string empName;
    string designation;

public:
    void getEmployeeDetails() {
        cout << "Enter employee number: ";
        cin >> empNumber;
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, empName);
        cout << "Enter designation: ";
        getline(cin, designation);
    }

    void printEmployeeDetails() {
        cout << "Emp number: " << empNumber << endl;
        cout << "Emp Name: " << empName << endl;
        cout << "Designation: " << designation << endl;
    }
};

class Salary : private Employee {
private:
    
    int hra;
    int da;
    int pf;
    int netPay;

public:
    void getSalaryDetails() {
        getEmployeeDetails();
        
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;
        cout << "Enter PF: ";
        cin >> pf;
    }

   

    void printSalaryDetails() {
        printEmployeeDetails();
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "PF: " << pf << endl;
        
    }
};

class BankDetails : private Salary {
private:
    string bankName;
    string accountNumber;

public:
    void getBankDetails() {
        getSalaryDetails();
        cout << "Enter bank name: ";
        cin.ignore();
        getline(cin, bankName);
        cout << "Enter account number: ";
        getline(cin, accountNumber);
    }

    void printEmployeeDetailsWithBank() {
        printSalaryDetails();
        cout << "Bank Name: " << bankName << endl;
        cout << "Account Number: " << accountNumber << endl;
    }
};

int main() {
    BankDetails employee;
 
    employee.getBankDetails();

    employee.printEmployeeDetailsWithBank();

    return 0;
}