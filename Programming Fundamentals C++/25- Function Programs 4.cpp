#include <iostream>
using namespace std;
void calculateAverageAndGrade(int marks1, int marks2, int marks3) {
    float average = (marks1 + marks2 + marks3) / 3.0;
    cout << "Average Marks: " << average << endl;
    if (average >= 90) {
        cout << "Grade: A+" << endl;
    } else if (average >= 80) {
        cout << "Grade: A" << endl;
    } else if (average >= 70) {
        cout << "Grade: B" << endl;
    } else if (average >= 60) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
}
int main() {
    int m1, m2, m3;
    cout << "Enter marks of three subjects: ";
    cin >> m1 >> m2 >> m3;
    calculateAverageAndGrade(m1, m2, m3);
    return 0;
}
