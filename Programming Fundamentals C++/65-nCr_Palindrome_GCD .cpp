#include <iostream>
using namespace std;
long long factorial(int );
bool isPalindrome(string );
int GCD(int, int);
int main() {
	cout<<"_______Find nCr________"<<endl;
    int n, r;
    cout << "Enter value of n (0 to 20): ";
    cin >> n;
    cout << "Enter value of r (0 to " << n << "): ";
    cin >> r;
    while (r<0||r>n||n<0||n>20){
    cout << "Invalid input. Make sure 0 <= r <= n <= 20." << endl;
    cout << "Enter value of n (0 to 20): ";
    cin >> n;
    cout << "Enter value of r (0 to " << n << "): ";
    cin >> r;
    }
    long long nCr = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "C(" << n << ", " << r << ") = " << nCr << endl;
  
    cout<<"________Palindrome ID_________"<<endl;
    string ID, reversed = "";
    cout << "Enter a word: ";
    cin >> ID;
    for (int i = ID.length()-1; i >=0; i--) {
    reversed += ID[i];
    }
    if (ID == reversed) {
    string ms="True";
    isPalindrome(ms);
    } else {
    string msg="False";
    isPalindrome(msg);   
	}
    cout<<"__________Find GCD___________"<<endl;
    int a, b;
	cout<<"enter value of a and b to fing GCD"<<endl;
	cin>>a>>b;
	int result=GCD(a,b);
	cout<<"GCD of "<<a<<" and "<<b<<" is: "<<result;
    return 0;

}
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
    result *= i;
    }
    return result;
}
bool isPalindrome(string msg){
	cout<<msg<<endl;
}
	int GCD(int a, int b) {
	while(b!=0){
		int t=a%b;
		a=b;
		b=t;
	}
	return a;
}


