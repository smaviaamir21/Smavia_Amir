#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
    string firstName, middleName, lastName, fullName; 
    int a = 0, e = 0, i = 0, o = 0, u = 0;  
    cout << "Enter First Name: "; 
    cin >> firstName; 
    cout << "Enter Middle Name: "; 
    cin >> middleName; 
    cout << "Enter Last Name: "; 
    cin >> lastName; 
    fullName = firstName + middleName + lastName; 
    int length = fullName.length(); 
    for (int l = 0; l < length; l++) { 
        if (fullName[l] == 'a') { 
            a++; 
        } else if (fullName[l] == 'e') { 
            e++; 
        } else if (fullName[l] == 'i') { 
            i++; 
        } else if (fullName[l] == 'o') { 
            o++; 
        } else if (fullName[l] == 'u') { 
            u++; 
        } 
    } 
    cout << "\nFull Name: " << fullName << endl; 
    cout << "Full Name Length: " << length << endl; 
    cout << "a: " << a << endl; 
    cout << "e: " << e << endl; 
    cout << "i: " << i << endl; 
    cout << "o: " << o << endl; 
    cout << "u: " << u << endl; 
    cout << "\nAGENT CODE: " << length << a << e << i << o << u << endl; 
    return 0; 
}
