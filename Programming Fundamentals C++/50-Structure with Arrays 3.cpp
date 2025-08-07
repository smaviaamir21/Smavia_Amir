#include<iostream>
using namespace std;
struct student{
	string name;
	int mathM;
	int physicsM;
	int englishM;
	int computerM;
	int urduM;
};
struct teacher{
	string mathT;
	string physicsT;
	string englishT;
	string computerT;
	string urduT;
};
int main(){
	int num;
	int totalmath=0; 
	int totalphysics=0; 
	int totalenglish=0; 
	int totalcomputer=0; 
	int totalurdu=0;
	cout<<"How many number of students in the class";
	cin>>num;
	teacher t;
	cout<<"Enter the name of Math teacher:";
	cin>>t.mathT;
	cout<<"Enter the name of Physics teacher:";
	cin>>t.physicsT;
	cout<<"Enter the name of English teacher:";
	cin>>t.englishT;
	cout<<"Enter the name of Computer teacher:";
	cin>>t.computerT;
	cout<<"Enter the name of Urdu teacher:";
	cin>>t.urduT;
	student s[num];
	for(int i=0; i<num;i++){
	cout<<"Enter your Name";
	cin>>s[i].name;
	cout<<"Enter marks of Math";
    cin>>s[i].mathM;
	cout<<"Enter marks of Physics";
    cin>>s[i].physicsM;
    cout<<"Enter marks of English";
	cin>>s[i].englishM;
    cout<<"Enter marks of Computer";
	cin>>s[i].computerM;	
	cout<<"Enter marks of Urdu";
	cin>>s[i].urduM;
    totalmath+=s[i].mathM;
    totalphysics+=s[i].physicsM;
    totalenglish+=s[i].englishM;
    totalcomputer+=s[i].computerM;
    totalurdu+=s[i].urduM;
}
float ave_math=totalmath/num;
float ave_physics=totalphysics/num;
float ave_english=totalenglish/num;
float ave_computer=totalcomputer/num;
float ave_urdu=totalurdu/num;

cout<<ave_math<<endl<<ave_physics<<endl<<ave_english<<endl<<ave_computer<<endl<<ave_urdu<<endl;

if(ave_math>ave_physics||ave_math>ave_english||ave_math>ave_english||ave_math>ave_urdu){
	cout<<"Math:"<<ave_math<<"of teacher "<<t.mathT;
}
else if(ave_physics>ave_math||ave_physics>ave_english||ave_physics>ave_computer||ave_physics>ave_urdu){
		cout<<"Physics:"<<ave_physics<<"of teacher "<<t.physicsT;
}
else if(ave_english>ave_physics||ave_english>ave_math||ave_english>ave_computer||ave_english>ave_urdu){
		cout<<"English:"<<ave_english<<"of teacher "<<t.englishT;
}
else if(ave_computer>ave_physics||ave_computer>ave_english||ave_computer>ave_math||ave_computer>ave_urdu){
		cout<<"Computer:"<<ave_english<<"of teacher "<<t.computerT;
}
else{
		cout<<"Urdu:"<<ave_urdu<<"of teacher "<<t.urduT;
}

}
