#include <iostream>
using namespace std;
int main() {
    int n, i = 1, sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    do {
        if (i % 2 == 0)
            sum += i;
        i++;
    } while (i <= n);
    cout << "Sum of even numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}
