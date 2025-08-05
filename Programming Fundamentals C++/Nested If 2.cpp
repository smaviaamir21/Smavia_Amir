#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 0) {
        if (age >= 18)
            cout << "You are eligible to vote." << endl;
        else
            cout << "You are not eligible to vote." << endl;
    } else {
        cout << "Invalid age entered!" << endl;
    }

    return 0;
}
