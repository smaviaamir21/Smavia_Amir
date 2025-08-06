#include<iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 0) {
        if (marks >= 90)
            cout << "Grade A" << endl;
        else if (marks >= 80)
            cout << "Grade B" << endl;
        else
            cout << "Below B grade" << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;
}
