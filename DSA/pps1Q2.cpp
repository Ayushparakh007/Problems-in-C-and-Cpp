#include <iostream>
#include <string>
using namespace std;

class Courier {
protected:
    int CourierID;
    string Name_of_Courier;

public:
    Courier(int id, string name) {
        CourierID = id;
        Name_of_Courier = name;
    }

    void PrintBill(double Base_fare) {
        // double Shipping_Cost = Base_fare + 30;
        // cout << "CourierID: " << CourierID << endl;
        // cout << "Name_of_Courier: " << Name_of_Courier << endl;
 
    }
};

class International_services : public Courier {
private:

    double Weight;

public:
    International_services(int id, string name, double weight)
        : Courier(id, name) {
       
        Weight = weight;
    }

    void FinalBill(double Base_fare) {
        double Shipping_Cost = Base_fare + 30;
        double Total_ShippingCost = Base_fare * Weight;
        cout << "CourierID: " << CourierID << endl;
        cout << "Name_of_Courier: " << Name_of_Courier << endl;
        cout << "The Shipping cost is: " << Shipping_Cost << endl;
        cout << "Weight: " << Weight << endl;

        if (Total_ShippingCost > 100) {
            cout << "Total Shipping Cost: " << Total_ShippingCost << endl;
            cout << "More Sale" << endl;
        } else {
            cout << "Total Shipping Cost: " << Total_ShippingCost << endl;
            cout << "Less Sale" << endl;
        }
    }
};

int main() {
    int courierID;
    string courierName;

    double baseFare, weight;

    cout << "Enter the Courier ID: ";
    cin >> courierID;
    cout << "Enter the Name of the Courier: ";
    cin.ignore();
    getline(cin, courierName);
    cout << "Enter the Base Fare: ";
    cin >> baseFare;

    Courier courier(courierID, courierName);
   
    cout << "Enter the Weight in KG: ";
    cin >> weight;

    International_services internationalCourier(courierID, courierName,  weight);
    internationalCourier.FinalBill(baseFare);

    return 0;
}