#include <iostream>
using namespace std;

void sorting(int (&Num)[10], int N) {
    int temp, choose;
    cout << "Choose the order you want (1-Ascending, 2-Descending): ";
    cin >> choose;
    if (choose == 1) {
          // Ascending order
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N-i-1 ; j++) {
                if (Num[j] > Num[j + 1]) {
                    temp = Num[j];
                    Num[j] = Num[j + 1];
                    Num[j + 1] = temp;
                }
            }
        }
    } else if (choose == 2) {
        // Descending order
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (Num[j] < Num[j + 1]) {
                    temp = Num[j];
                    Num[j] = Num[j + 1];
                    Num[j + 1] = temp;
                }
            }
        }
    } else {
        cout << "Invalid choice!" << endl;
    }
}
int main() {
    int Number[10] = {7, 1, 32, 6, 0, 2, 4, 3, 29, 25};
    int n = 10;
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << Number[i] << " ";
    }
    cout << endl;

    sorting(Number, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << Number[i] << " ";
    }
    cout << endl;
    return 0;
}
