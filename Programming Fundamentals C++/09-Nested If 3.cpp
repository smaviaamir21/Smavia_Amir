#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        if (num % 2 == 0)
            cout << "Positive and Even" << endl;
        else
            cout << "Positive and Odd" << endl;
    } else {
        cout << "Not Positive" << endl;
    }

    return 0;
}
