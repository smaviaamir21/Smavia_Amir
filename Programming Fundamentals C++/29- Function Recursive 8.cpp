#include<iostream>
using namespace std;
int fibo(int);
int main() {
	cout<<"_________Fibonacci Sequence__________ "<<endl;
    int limit;
    cout<<"Enter limit for series of Fibonacci up to around 30  :";
    cin >> limit;
for(int i=0;i<limit; i++){
        int f = fibo(i);
		cout << f << "    ";
      }
      return 0;
}
int fibo(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n - 1)+fibo(n - 2);
    }
