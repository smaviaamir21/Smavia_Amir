#include<iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number >= 0)
        cout << "Positive" << endl;
    else
        cout << "Negative" << endl;
    return 0;
}
