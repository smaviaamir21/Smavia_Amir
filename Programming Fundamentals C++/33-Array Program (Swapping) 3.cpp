#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of index for a and b";
    cin>>n;
    int a[n];
    int b[n];
    cout<<" Enter values of a:"<<endl;
 for(int i=0; i<n; i++){
 	cin>>a[i];
 }
 cout<<" Enter values of b:"<<endl;
 for(int i=0; i<n; i++){
 	cin>>b[i];
 }
    // Swap elements one by one
    for(int i = 0; i < n; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
cout<<"The Swapped Values of a and b"<<endl;
    // Print array a
    cout << "a = ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    // Print array b
    cout << "\nb = ";
    for(int i = 0; i <n; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
