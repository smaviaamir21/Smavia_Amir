#include<iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {

            if ((i == 1 && (j >= 3 && j <= 4)) ||
                (i == 2 && (j == 2 || j == 5)) ||
                (i == 3 && (j == 1 || j == 6)) ||
                (i == 4 && (j == 1 || j == 6)) ||
                (i == 5 && (j == 2 || j == 5)) ||
                (i == 6 && (j == 3 || j == 4))) {
                cout << "*  ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}
