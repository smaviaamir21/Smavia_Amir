#include<iostream>
using namespace std;
int series(int);
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    series(num);
    return 0;
}
int series(int n){
	int sum=0;
	for(int i=1; i<=n; i++){
		sum+=i;
		cout<<sum<<" ";
	}	
}
