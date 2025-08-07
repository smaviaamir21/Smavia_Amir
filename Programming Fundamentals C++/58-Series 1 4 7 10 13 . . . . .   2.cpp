#include<iostream>
using namespace std;
int series(int);
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    series(num);
    return 0;
}
int series(int n){
	for(int i=1; i<=n; i++){
		cout<<i*3-2<<" ";
	}	
}
