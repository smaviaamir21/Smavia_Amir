#include<iostream>
using namespace std;

int main() {
    int* arr;
    int** dp = &arr;
    int size;

    cout << "Enter size of elements: ";
    cin >> size;

    *dp = new int[size];

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> (*dp)[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < size; i++) {
        cout << (*dp)[i] << " ";
    }

    delete[] *dp;  // Free allocated memory
    return 0;
}
