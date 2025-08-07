#include<iostream>
using namespace std;
int main(){
	int n, i=0;
	cout<<"Enter the hight of Triangle:";
	cin>>n;
	while(i<=n){
		for(int j=1; j<=i; j++){
			cout<<"* ";	
		}
			cout<<"\n";
			i++;
	}
	return 0;
}
