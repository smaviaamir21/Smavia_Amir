#include<iostream>
using namespace std;
int takemarks(int);
char assigngrade(float);

int main(){
	int nos;
	cout<<"Enter number of students: ";
	cin>>nos;
	
	for(int i=1; i<=nos; i++){
		int subject;
		cout<<"Enter number of subject of student "<<i<<":";
		cin>>subject;
	int total = takemarks(subject);
        float per= (total/(subject*100.0)*100);
        char grade = assigngrade(per);
        cout<<grade<<" Grade"<<endl;
	}
}

int takemarks(int sub){
	int totalmk=0;
	for(int i=1; i<=sub; i++){
		int marks;
		cout<<"Enter marks of subject "<<i<<" :";
		cin>>marks;
		totalmk+=marks;
	}
	return totalmk;
}

char assigngrade(float perc){
	if(perc >=80)
	return 'A';
	else if (perc >= 70)
	return 'B';
	else if (perc >= 60)
	return 'C';
	else if (perc >= 50)
	return 'D';
	else 
	return 'F';
	}
