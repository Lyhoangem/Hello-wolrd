#include<iostream>
using namespace std;
void input(int &a){
	cin>>a;
}
int input(){
	int a;
	cin>>a;
	return a;
}

int gcd(int m,int n){
	int max;
	if(n==1||m==1) return 1;
	int k= (m>=n)?n:m;
	for(int i=1;i<=k;i++){
		if(m%i==0&&n%i==0) max=i;
	}
	return max;
}


int main(){
	int m,n;
	input(n);
	m=input();
	cout<<gcd(m,n);
	return 0;
}
