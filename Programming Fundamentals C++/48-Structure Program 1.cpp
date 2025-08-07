#include<iostream>
using namespace std;
struct Student {
    int id;
    string name;
    float CGPA;
};
int main() {
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Student Name: ";
    cin >> s.name;
    cout << "Enter Student CGPA: ";
    cin >> s.CGPA;
  
    cout << "\n--- Student Details ---" << endl;
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "CGPA: " << s.CGPA << endl;
    return 0;
}
