#include<iostream>
#include<cmath>
using namespace std;
int series(int);
int main(){
	int num;
	cout<<"Enter a number that how many number you want to show a series";
	cin>>num;
	series(num);
	return 0;
	}
int series(int n){
	for(int i=1; i<=n; i++){
		if(i%4!=0){
			cout<<i*i<<"  ";
		}
		else{
			continue;
		}
	}
}
