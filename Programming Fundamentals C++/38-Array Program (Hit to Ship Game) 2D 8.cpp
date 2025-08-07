#include<iostream>
using namespace std;
int main(){
	int index, sub_index, score=0;
	int myGame[4][4]={{0,1,0,0},{1,1,0,0},{0,0,0,0},{0,0,0,1}};
	while(score<4){
		cout<<"Enter index and sub index to find out the ship:";
		cin>>index>>sub_index;
		if(myGame[index][sub_index]==1){
			cout<<"Hit"<<endl<<3-score<<"ships left to hit."<<endl;
			score++;
			cout<<"Your score is:"<<score<<"now."<<endl;
			myGame[index][sub_index]=0;
		}
		else{
			cout<<"You missed it."<<endl;
		}
	} 
	return 0;
}
