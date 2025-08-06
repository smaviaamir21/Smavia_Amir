#include <iostream>
using namespace std;
void showMessage();
void showInfo();
int main() {
    showMessage();
    return 0;
}
void showMessage() {
    cout << "Calling showInfo() from showMessage..." << endl;
    showInfo();
}
void showInfo() {
    cout << "Inside showInfo!" << endl;
}
