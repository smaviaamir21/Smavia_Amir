#include<iostream>
using namespace std;
int showmenu();
int showvotes(int,int,int);
int main(){
	int choice;
	int participant=1;
	int v1=0, v2=0, v3=0;
	const int pizza=1, burger=2, pasta=3;
	showmenu();
	while(participant<=10){
		cout<<"Enter your choice participant "<<participant<<":"<<endl;
		cin>>choice;
		while(choice<pizza||choice>pasta){
			cout<<"Enter valid choice again from menu participant "<<participant<<":"<<endl;
			cin>>choice;
		}
		if(choice==1){
			v1++;
		}
		else if(choice==2){
			v2++;
		}
		else {
			v3++;
		}
		participant++;
		
	}
	cout<<"Total pizza: "<<v1<<endl;
	cout<<"Total burger: "<<v2<<endl;
	cout<<"Total pasta: "<<v3<<endl;
	showvotes(v1,v2,v3);
	return 0;
}
int showmenu(){
cout<<"Restuarants Menu\n 1.Pizza\n 2.Burger\n 3.Pasta\n";}
int showvotes(int n1, int n2, int n3){
	if(n1>n2&&n1>n3){
		cout<<"Pizza votes are maximum";
	}
	else if(n2>n1&&n2>n3){
		cout<<"Burger votes are maximum";
	}
	else if(n3>n1&&n3>n2){
		cout<<"Pasta votes are maximum";
	}
	else{
		cout<<"Votes are Tie";
	}
}
