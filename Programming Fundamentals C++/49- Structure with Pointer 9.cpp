#include <iostream> 
 #include <string> 
 #include <iomanip> 
 using namespace std; 
 struct Student 
{ 
 string name;
 int idNum; 
 int creditHours; 
 double gpa; 
 }; 
 int main() { 
 Student ptr; 
 Student* s= &ptr;
   
 cout << "Enter the following student data:\n";
   
 cout << "Student name: "; 
 cin >> s->name; 
 cout << "Student ID Number: "; 
 cin >> s->idNum; 
 cout << "Credit Hours Enrolled: "; 
 cin >> s->creditHours; 
 cout << "Current GPA: "; 
 cin >> s->gpa; 
   
 cout << "\nHere is the student data you entered:\n"; 
 cout << "Name: " << s->name << endl; 
 cout << "ID Number: " << s->idNum << endl; 
 cout << "Credit Hours: " << s->creditHours << endl; 
cout << "GPA: " << s->gpa << endl; 
 return 0; 
 } 
