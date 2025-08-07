#include<iostream>
using namespace std;
int main() {
    int x = 5;
    int* p = &x;
    int** dp = &p;
    cout << "The  value of x: " << x << endl;
    **dp = 50;
    cout << "New value of x after modification: " << x << endl;
    return 0;
}
