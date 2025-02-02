#include<iostream>
using namespace std;

int modulo(int m,int n){
	if(n==1) return 0;
	if(m<=n) return 0;
	else {
		int k=m-n;
		m=k;
		if(k==n) return 0;
		else if(k<n) return k;
		else {
			return modulo(m,n);
		}
	}
}


int main(){
	int m,n;
	cin>>m>>n;
	cout<<modulo(m,n);
}
