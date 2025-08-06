#include <iostream>
using namespace std;
float updateBalance(float balance, float amount, char type) {
    if (type == 'd') balance += amount;
    else if (type == 'w' && amount <= balance) balance -= amount;
    else cout << "Invalid transaction.\n";
    return balance;
}
int main() {
    float balance = 5000, amount;
    char choice;
    cout << "Enter transaction type (d = deposit, w = withdraw): ";
    cin >> choice;
    cout << "Enter amount: ";
    cin >> amount;
    balance = updateBalance(balance, amount, choice);
    cout << "Updated balance: " << balance << " PKR\n";
    return 0;
}
