#include <iostream>
#include <string>
using namespace std;

class SecureBankAccount {
private:
    int accountNumber;
    double balance;
    const string accountType;
    int* logHistory;

public:
    SecureBankAccount(int accountNumber, double initialBalance, const string& accountType, int logSize)
        : accountType(accountType) {
        this->accountNumber = accountNumber;
        this->balance = initialBalance;

        if (initialBalance < 500.0) {
            cout << "Error: Initial balance must be at least 500 PKR for account " 
                 << this->accountNumber << "." << endl;
        }

        logHistory = new int(logSize);
        cout << "Account " << this->accountNumber << " created successfully (" 
             << this->accountType << " Account)." << endl;
    }

    SecureBankAccount(const SecureBankAccount& source)
        : accountType(source.accountType) {
        accountNumber = source.accountNumber;
        balance = source.balance;
        logHistory = new int(*source.logHistory);
        cout << "Deep copy constructor called for account " << accountNumber << "." << endl;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << " PKR" << endl;
        cout << "Log History Size: " << *logHistory << endl;
        cout << "Log History Address: " << logHistory << endl;
    }

    ~SecureBankAccount() {
        delete logHistory;
        cout << "Account " << accountNumber << " memory released successfully." << endl;
    }
};

int main() {
    {
        SecureBankAccount acc1(1001, 1000.0, "Current", 5);
        acc1.display();
        cout << endl;

        SecureBankAccount acc2 = acc1;
        acc2.display();
        cout << endl;
    }

    cout << "End of program." << endl;
    return 0;
}
