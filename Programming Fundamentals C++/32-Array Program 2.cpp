#include<iostream>
using namespace std;
int main(){
	int n;

	cout<<"Enter a number:";
	cin>>n;
	char fname[n];
	char vowel[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'U', 'O',};
	int total=0;
	for(int i=0; i<n; i++){
		cout<<"Enter an Alphabet:";
		cin>>fname[i];
		for (int k = 0; k < 10; k++) {
            if (fname[i] == vowel[k]) {
                cout << fname[i] << " - " << i << endl;
                total++;
                break;		
		}
	}
}
	cout<<"Total vowel are:"<<total;
	return 0;
}
