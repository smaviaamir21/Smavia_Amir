#include <iostream>
#include <cmath>
using namespace std;

void findRoots(int a, int b, int c) {
    float d = b*b - 4*a*c;
    if (d > 0)
        cout << "Real roots: " << (-b + sqrt(d)) / (2*a) << " and " << (-b - sqrt(d)) / (2*a);
    else if (d == 0)
        cout << "Equal roots: " << -b / (2*a);
    else
        cout << "Complex roots.";
}

int main() {
    findRoots(1, -3, 2); // Example: x² - 3x + 2 = 0
    return 0;
}
