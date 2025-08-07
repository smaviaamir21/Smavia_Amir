#include<iostream>
using namespace std;
int main(){
	cout<<"______Weekly Temperature Summary________"<<endl;
	int t=0, n=7;
int k=1, total=0;
int v[n];
for(int i=0;i<7;i++){
	cout<<"Enter temperature  of day"<<i+1<<": ";
	cin>>v[i];
	total=total+v[i];
}
cout<<"The average is:"<<total/7<<endl;
int M=v[0], m=v[0];
for(int i=0;i<n; i++){
	if(v[i]>M){
		M=v[i];
	}
	else if(v[i]<m){
		m=v[i];
	}
}
cout<<"The maximum temperature"<<M<<endl;
cout<<"The minimum temperature"<<m<<endl;
	cout<<"_____First 15 numbers divisible by 5 and 3:________"<<endl;
while(t!=15){
	if(k%5==0&&k%3==0){
		cout<<k<<" ";
		t++;	
	} 
		k++;
}
cout<<endl;
cout<<"________Interactive Menu System________ "<<endl;
int ch, v1, v2;
cout<<"enter two numbers:"<<endl;
cin>>v1>>v2;

while(ch!=5){
if(v2!=0){
cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit"<<endl;
cout<<"enter your choice:"<<endl;
cin>>ch;
if(ch==1){
	cout<<"addition:"<<v1+v2<<endl;
}	
else if(ch==2){
	cout<<"subtraction:"<<v1-v2<<endl;
}
else if(ch==3){
	cout<<"multiplication:"<<v1*v2<<endl;
}
else if(ch==4){
	cout<<"division:"<<v2/v1<<endl;
}
else if(ch==5){
return 0;   
}
else{
	cout<<"Invalid choice.";
     	cout<<endl;
}
}
else{
	cout<<"Cannot divide by zero"<<endl;
    return 0;
}
}
}
