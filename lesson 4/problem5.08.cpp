#include<iostream>
using namespace std;
	int sd=0;
int reverse(int n){
	if(1<=n&&n<=9) return n;
	else{
		
		int r= n%10;
		n/=10;
		return sd*10+r;
	
}
}



int main(){
	int n;
	cin>>n;
	cout<<reverse(n);
}
