#include<iostream>
using namespace std;
int main() {
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter your choice: ";
    cin >> choice;
    if (choice == 1)
        cout << "Sum: " << a + b;
    else if (choice == 2)
        cout << "Difference: " << a - b;
    else if (choice == 3)
        cout << "Product: " << a * b;
    else if (choice == 4) {
        if (b != 0)
            cout << "Quotient: " << a / b;
        else
            cout << "Cannot divide by zero!";
    } else
        cout << "Invalid choice";

    return 0;
}
