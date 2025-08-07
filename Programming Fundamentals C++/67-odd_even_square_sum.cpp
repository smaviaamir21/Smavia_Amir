#include<iostream>
using namespace std;
int main(){
	int n1, n2;
	cout<<"Enter n1 and n2:";
	cin>>n1>>n2;
	while(n1>=n2){
		cout<<"again";
		cin>>n1>>n2;
	}
	cout<<"Odd numbers between n1 and n2:"<<endl;
	int sumofodd=0;
	cout<<"Num____Square"<<endl;
	for(int n=n1+1; n<n2; n++){
		if(n%2!=0){
		
			cout<<n<<"\t"; 
			cout<<n*n<<endl; 
			sumofodd+=(n*n);}   
			    }
		
				cout<<"The sum of square of odd numbers between n1and n2 is:"<<sumofodd<<endl;
		

					 cout<<"The sum of even numbers between n1 and n2 is:"<<endl;

		int sumofeven=0; 
		cout<<"Num____Square"<<endl;
		for(int n=n1+1; n<n2; n++){		
		if(n%2==0){
			cout<<n<<"\t"<<n*n<<endl;
		sumofeven+=(n*n); 
	}	}
		 cout<<"The sum of even numbers between n1 and n2 is:"<<sumofeven<<endl;
		    
	int sum;
	cout<<"Num____Square"<<endl;
	for(int num=0; num<=10; num++){
		
		cout<<num<<"____"<<num*num<<endl;   
	    sum+=(num*num);
    	 }
		  
         cout<<"Sum of square of 1 to 10 is:"<<sum;
	 
	return 0;
}
