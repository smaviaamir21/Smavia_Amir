#include<iostream>
using namespace std;
int power(int , int); 
int main(){
	cout<<"______Recursive Power Function________ "<<endl;
	int base,exponent;
	cout<<"To find the power enter base and exponent:";
	cin>>base>>exponent;
	int result=power(base,exponent);
	cout<<"x^y =" <<result; 
}
int power(int x, int y){
	if(y == 0)  return 1; 
	else if(y == 1)  return x;
	return  x*power(x, y-1);
}
