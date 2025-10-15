#include <iostream>
using namespace std;

class PetrolPump {
private:
    int pumpID;
    double litersFilled;
    static double pricePerLiter;

public:
    PetrolPump(int id, double liters) {
        pumpID = id;
        litersFilled = liters;
    }

    void printReceipt() {
        double total = litersFilled * pricePerLiter;
        cout << "\n--- Petrol Pump Receipt ---" << endl;
        cout << "Pump ID: " << pumpID << endl;
        cout << "Liters Filled: " << litersFilled << endl;
        cout << "Price per Liter: Rs " << pricePerLiter << endl;
        cout << "Total Bill: Rs " << total << endl;
    }
};
double PetrolPump::pricePerLiter = 270.50;

int main() {
    PetrolPump p1(101, 12.5);
    PetrolPump p2(102, 8.0);

    p1.printReceipt();
    p2.printReceipt();

    return 0;
}
