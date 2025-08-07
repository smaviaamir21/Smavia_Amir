#include <iostream>
#include <fstream>
#include <string>  // Needed for using string
using namespace std;
int main() {
    // Write to file
    ofstream outFile("output.txt");  // write mode
    outFile << "Hello file!";
    outFile.close();
    // Read from file
    ifstream inFile("output.txt");   // read mode
    string line;                     // Declare the string to hold the line
    getline(inFile, line);          // Read from the file
    inFile.close();
    cout << line;                   // Output: Hello file!
    return 0;
}
