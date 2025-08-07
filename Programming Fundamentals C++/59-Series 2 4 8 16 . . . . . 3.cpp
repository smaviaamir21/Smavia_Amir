#include<iostream>
using namespace std;
int main(){
	int n, num=2;
	cout<<"Enter limit of series 2 4 8 16....   :";
	cin>>n;
	for(int i=1; i<=n; i++){
		cout<<num<<" ";
		num*=2;
	}
	return 0;
}
