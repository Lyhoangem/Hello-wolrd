#include<iostream>
using namespace std;
#define MAX = 300
int Fibo(int);
int main(){
	int x;
	cin>>x;
	if(1>x||x>30) cout<<"So "<<x<<" khong nam trong khoang [1,30]."<<endl;
	else cout<<Fibo(x)<<endl;
	return 0;
}
int Fibo(int x){
	int fibo;
	if(x==1||x==2) return 1;
	if(x==0) return 0;
	else{ int a=0,b=1;
	for(int i=1;i<=x;i++){
		fibo=a+b;
		b=a;
		a=fibo;
	}
	}
	return fibo;
}

