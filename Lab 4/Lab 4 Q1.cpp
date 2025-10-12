#include <iostream>
#include <string>
using namespace std;

class MobileAccount {
private:
    double balance;
    string phoneNumber;

public:
    MobileAccount() {
        balance = 50.0;
        phoneNumber = "";
    }

    MobileAccount(string pNumber, double initialBalance) {
        phoneNumber = pNumber;
        balance = initialBalance;
    }

    void display() {
        cout << "Phone Number: " << (phoneNumber.empty() ? "Not set" : phoneNumber) << endl;
        cout << "Current Balance: " << balance << " PKR" << endl;
    }
};

int main() {
    MobileAccount acc1;
    cout << "Account 1 Details:" << endl;
    acc1.display();
    cout << endl;

    MobileAccount acc2("03331234567", 250.0);
    cout << "Account 2 Details:" << endl;
    acc2.display();

    return 0;
}
