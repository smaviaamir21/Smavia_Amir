#include<iostream>
using namespace std;
int GCD(int, int);
int main(){
	int a, b;
	cout<<"Enter value of a and b to find GCD"<<endl;
	cin>>a>>b;
	int result=GCD(a,b);
	cout<<"GCD of "<<a<<" and "<<b<<" is: "<<result;
	return 0;
}
	int GCD(int a, int b) {
	while(b!=0){
		int t=a%b;
		a=b;
		b=t;
	}
	return a;
}
