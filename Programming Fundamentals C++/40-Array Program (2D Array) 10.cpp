#include <iostream> 
#include <cstring> 
using namespace std; 
int main() { 
    int rows = 5; 
    int cols = 7; 
    char name[rows][cols] = {"ALICE", "BRIAN", "CAROL", "ALVIN", "GRACE"}; 
    char commonLetter, newLetter; 
    for (int i = 0; i < rows; ++i) { 
        cout << name[i] << "\t"; 
    } 
    cout<<endl<<endl; 
    cout << "Enter the Character you want to Replace: "; 
    cin >> commonLetter; 
    cout << "Enter New Letter: "; 
    cin >> newLetter; 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            if (name[i][j] == commonLetter) { 
                name[i][j] = newLetter; 
            } 
        } 
    } 
    cout<<endl; 
    for (int i = 0; i < rows; ++i) { 
        cout << name[i] << "\t"; 
    } 
    return 0; 
}
