#include<iostream>
using namespace std;

int reverse(int n){
	int sodau=0, sd;
	
	for(int i=n;i>0;i/=10){
		sd=i%10;
		sodau= sodau*10+sd;
	}
	return sodau;
}

int main(){
	int n;
	cin>>n;
	cout<<reverse(n);
}
