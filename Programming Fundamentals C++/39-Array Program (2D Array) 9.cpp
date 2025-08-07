#include<iostream>
using namespace std;
int main() {
    int marks[5][3];
    float studentAvg[5];  
    float subjectSum[3];  
    for(int i = 0; i < 5; i++) {
        cout << "Enter marks for Student " << i + 1 << ":" << endl;
        for(int j = 0; j < 3; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> marks[i][j];

            studentAvg[i] += marks[i][j];   
            subjectSum[j] += marks[i][j];    
        }
    }
    cout << "\nAverage marks of each student:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": " << studentAvg[i] / 3 << endl;
    }
    cout << "\nAverage marks of each subject:" << endl;
    for(int j = 0; j < 3; j++) {
        cout << "Subject " << j + 1 << ": " << subjectSum[j] / 5 << endl;
    }

    return 0;
}
