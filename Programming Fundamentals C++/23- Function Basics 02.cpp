#include<iostream>
using namespace std;
int factorial(int );
int main(){
	int n;
	cout<<"Enter a number for factorial:";
	cin>>n;
	cout<<factorial(n)<<" is the factorial of "<<n<<"\n";
	}
	int factorial(int n){
		int fact=1;
		for(int i=1; i<=n; i++){
			fact=fact*i;
		}
		return fact;
	}
