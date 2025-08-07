#include<iostream>
using namespace std;
void initnumber(int[], int);
void searching(int[], int);
void swapping(int[], int);
void swap(int[], int);
void ascending(int [], int);
void descending(int [], int);
int main(){
	int N;
	cout<<"Enter array number:";
	cin>>N;
	int number[N];
	initnumber(number, N);
			cout<<"The values of array are:"<<endl;
	for(int i=0; i<N; i++){
		cout<<number[i]<<"   "<<endl;
	}
	searching(number, N);
	for(int i=0; i<N; i++){
		cout<<number[i]<<"   "<<endl;
	}
	swapping(number, N);
	cout<<"The swapped series of number:"<<endl;
	for(int i=0; i<N; i++){
		cout<<number[i]<<"   "<<endl;
	}
	swap(number, N);
	for(int i=0; i<N; i++){
		cout<<number[i]<<"   "<<endl;
	}
	ascending(number,N);
	 cout << "Array in ascending order: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << number[i] << " ";
    }
    descending(number, N);    cout <<endl<<"Array in descending order: "<<endl;
    for (int i = 0; i < N; i++) {
        cout << number[i] << " ";
    }
}
void initnumber(int num[], int N){
	for(int i=0; i<N; i++){
		cout<<"Enter values in array :";
		cin>>num[i];
}
}
void searching(int num[], int N){
	int v, total=0;
	cout<<"Enter the value:"<<endl;
	cin>>v;
	for(int i=0; i<N; i++){
		if(v==num[i]){
			cout<<v<<": This is same with array value on position :"<<i<<endl;
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
	cout<<"Enter two numbers:"<<endl;
	cin>>v1>>v2;
	cout<<"These two numbers are swapped with each other."<<endl;
	for(int i=0; i<N; i++){
		if(v1==num[i]){
			num[i]=v2;
		}
		else if(v2==num[i]) {
			num[i]=v1;
			}		
	}
}
void ascending(int num[], int N){
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}
void descending(int num[], int N){
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (num[j] < num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}
