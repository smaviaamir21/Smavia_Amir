#include<iostream>
using namespace std;
int sumOfDigits(int); 
int main(){
	cout<<"_________Sum of Digits_________ "<<endl;
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int t=sumOfDigits(n);
	cout<<"The sum of digits of the number is:"<<t;
}
int sumOfDigits(int num) {
	if(num<10){
		return num;
	}
	else{
	return (num % 10) + sumOfDigits(num / 10);
	}
}
