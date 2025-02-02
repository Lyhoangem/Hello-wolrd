#include<iostream>
using namespace std;

void input(int &n){
	cin>>n;
}

int sum(int n, int &s){
	s+=(n%10);
	n/=10;
	if(n==0) return s;
	else return sum(n,s);
}

int main(){
	int n, s=0;
input(n);
sum(n,s);
cout<<s;
return 0;
}
