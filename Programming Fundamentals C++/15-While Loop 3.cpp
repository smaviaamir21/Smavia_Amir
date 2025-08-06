#include<iostream>
using namespace std;
int main(){
	int n, m=1;
	int fact=1;
	cout<<"enete";
	cin>>n;
	while(n>=1){
		fact=fact*n;
		n--;
	}
	cout<<"the factorial of n is:"<<fact<<endl;
	return 0;
}
