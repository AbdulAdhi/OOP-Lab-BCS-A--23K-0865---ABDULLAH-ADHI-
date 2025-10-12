#include <iostream>
#include <string>
using namespace std;

class CurrencyExchange {
private:
    const double PKR_to_USD_Rate;
    string& branchName;
    int totalTransactions;

public:
    CurrencyExchange(double rate, string& branch, int transactions)
        : PKR_to_USD_Rate(rate), branchName(branch), totalTransactions(transactions) {}

    double convertPKRtoUSD(double pkrAmount) {
        totalTransactions++;
        return pkrAmount / PKR_to_USD_Rate;
    }

    void displayDetails() {
        cout << "Branch Name: " << branchName << endl;
        cout << "Exchange Rate (PKR to USD): " << PKR_to_USD_Rate << endl;
        cout << "Total Transactions: " << totalTransactions << endl;
    }
};

int main() {
    string branch = "Karachi Main Branch";
    CurrencyExchange exchange(278.5, branch, 0);

    exchange.displayDetails();
    cout << endl;

    double pkr = 55700;
    cout << pkr << " PKR = " << exchange.convertPKRtoUSD(pkr) << " USD" << endl;

    return 0;
}
