#include <iostream>
using namespace std;
void showPrime(int , int);
int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    showPrime(start, end);
    return 0;
}
void showPrime(int i, int j) {
    if (i>j)
        return;
    if ((i== 2 || i == 3 || i== 5 || i == 7) || 
       (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)) {
        cout << i<< " ";
    }
    showPrime(i+ 1, j);
}
