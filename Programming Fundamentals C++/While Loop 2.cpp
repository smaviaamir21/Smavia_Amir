#include<iostream>
using namespace std;
int main() {
    int num, i = 2, isPrime = 1;
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1) {
        isPrime = 0;
    } else {
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }
    if (isPrime)
        cout << num << " is a Prime number." << endl;
    else
        cout << num << " is not a Prime number." << endl;
    return 0;
}
