#include<iostream>
using namespace std;
int main() {
    int num = 10;
    int* p = &num;
    int** dp = &p;
    cout << "Value: " << num << endl;
    cout << "Value using *p: " << *p << endl;
    cout << "Value using **dp: " << **dp << endl;
    return 0;
}
