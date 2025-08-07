#include<iostream>
using namespace std;
int main(){
	int size=5, N;
	int arr[size]={100,200,300,200,500};
	int *ppt;
	ppt=&arr[0];
	for(int t=0; t<size; t++){
	cout<<ppt<<endl;
	cout<<*ppt<<endl;
	ppt++;
}
cout<<"enter a number thta you want to find from the array";
cin>>N;
ppt=arr;
for(int i=0;i<size; i++){
if(*ppt==N){
	cout<<ppt<<endl;
	cout<<*ppt<<endl; }
	ppt++;
	
}
    return 0;
}
