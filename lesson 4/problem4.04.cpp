#include<iostream>
#include<cmath>
using namespace std;

int checksonguyento(int n){
	if(n==1) return 0;
	if(n<=3) return n;
	else if(n%2==0||n%3==0) return 0;
	int i=5;
	while(i*i<=n){
		if(n%i==0||n%(i+2)==0) return 0;
		i+=6;
	}
	return n;
}


int sum_common_prime(int m, int n){
	int sum=0;
	if(m==1||n==1) return -1;
if(n>=m){
	for(int i=2;i<=m;i++){
		if(n%i==0&&m%i==0) sum+=checksonguyento(i);
	}
}
else if(m>=n){
	for(int i=2;i<=n;i++){
		if(n%i==0&&m%i==0) sum+=checksonguyento(i);
	}
}
if(sum) return sum;
else return -1;
}

int main(){
	int n,m;
	cin>>m>>n;
	cout<<sum_common_prime(m,n);
}
