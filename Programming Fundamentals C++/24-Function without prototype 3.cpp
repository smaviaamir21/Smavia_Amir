#include<iostream>
using namespace std;
int TableNum(){
	int n;
	cout<<"Enter a number";
	cin>>n;
	return n;
}
int PrintTable(int num){
	int m=0;
	while(m<=10){
	cout<<num<<"*"<<m<<"="<<num*m<<endl;
	m++;	
	}   }
int main(){
	int value;
	value=TableNum();
	PrintTable(value);
}
