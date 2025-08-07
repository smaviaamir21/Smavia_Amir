#include<iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int id;
    string name;
    Date dob;  // Nested structure
};

int main() {
    Student s;

    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Student Name: ";
    cin >> s.name;
    cout << "Enter Date of Birth (dd mm yyyy): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "\n--- Student Info ---\n";
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "DOB: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year << endl;

    return 0;
}
