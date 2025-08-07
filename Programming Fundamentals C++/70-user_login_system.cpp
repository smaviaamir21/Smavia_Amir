#include <iostream>
#include <fstream>
using namespace std;
void registerUser() {
    string id, password;
    cout << "\nEnter your ID: ";
    cin >> id;
    cout << "Create your Password: ";
    cin >> password;

    ofstream file("users.txt", ios::app); 
    file << id << " " << password << endl;
    file.close();
    cout << "Registered Successfully!\n";
}
void loginUser() {
    string inputPassword;
    bool found = false;
    do {
        cout << "\nEnter your Password: ";
        cin >> inputPassword;
        ifstream file("users.txt"); 
        string id, password;
        found = false;
        while (file >> id >> password) {
            if (inputPassword == password) {
                found = true;
                break;
            }
        }
        file.close();
        if (found) {
            cout << "Login Successful!\n";
            cout << "Opening Budget Calculator...\n";
        } else {
            cout << "Incorrect Password! Try again.\n";
        }
    } while (!found);
}
int main() {
    int choice;
    cout << "Welcome to the Budget Calculator App!\n";
    cout << "Are you:\n";
    cout << "1. New User\n";
    cout << "2. Existing User\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        registerUser();
    } else if (choice == 2) {
        loginUser();
    } else {
        cout << "Invalid choice!\n";
    }
    return 0;
}
