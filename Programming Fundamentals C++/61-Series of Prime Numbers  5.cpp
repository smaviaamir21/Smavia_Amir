#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    cout << "Prime numbers between " << start << " and " << end << " are:\n";
    for (int i = start; i <= end; i++) {
     if ((i== 2 || 1== 3 ||i== 5 || i == 7) || 
       (i % 2 != 0 && i % 3 != 0 &&i% 5 != 0 && i % 7 != 0)) {
        cout << i << " ";
    }
}
    return 0;
}
