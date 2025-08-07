#include<iostream>
using namespace std;
void initnumber(int[], int);
void searching(int[], int);
void swapping(int[], int);
void swap(int[], int);
int main(){
	int N;
	cout<<"Enter array number:";
	cin>>N;
	int number[N];
	initnumber(number, N);
	cout<<"The entered values are:"<<endl;
	for(int i=0; i<N; i++){
		cout<<number[i]<<"   "<<endl;
	}
	searching(number, N);
	cout<<"The origional index series:"<<endl;
	for(int i=0; i<N; i++){
		cout<<number[i]<<"   "<<endl;
	}
	swapping(number, N);
	cout<<"The swapped series of number:"<<endl;
	for(int i=0; i<N; i++){
		cout<<number[i]<<"   "<<endl;
	}
		swap(number, N);
		cout<<"These two numbers swapped with each other and the series is this:"<<endl;
	for(int i=0; i<N; i++){
		cout<<number[i]<<"   "<<endl;
	}
}
void initnumber(int num[], int N){
	for(int i=0; i<N; i++){
		cout<<"Enter values in array :"<<endl;
		cin>>num[i];
}
}
void searching(int num[], int N){
	int v, total=0;
	cout<<"Enter the value:"<<endl;
	cin>>v;
	for(int i=0; i<N; i++){
		if(v==num[i]){
			cout<<v<<" is same with array value on position: "<<i<<endl;
			total++;
		}
	}
	cout<<total<<" is the total."<<endl;
}
void swapping(int num[], int N){
	for(int i=0; i<N-1; i++){
	int v=num[i];
	num[i]=num[i+1];
	num[i+1]=v;
}
}
void swap(int num[], int N){
	int v1, v2, temp;
	cout<<"Enter two numbers";
	cin>>v1>>v2;
	for(int i=0; i<N; i++){
		if(v1==num[i]){
			num[i]=v2;
		}
		else if(v2==num[i]){
			num[i]=v1;
		}			
	}
}
