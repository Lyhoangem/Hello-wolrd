#include<iostream>
using namespace std;

int Fibo(int);
int main(){
	int x;
	cin>>x;
	if(x<1||x>30) {
		cout<<"So "<<x<<" khong nam trong khoang [1,30].";
	}
	else cout<<Fibo(x);
	
}
int Fibo(int n){
	if(n==1||n==2) return 1;
	else return Fibo(n-2)+Fibo(n-1);
}
