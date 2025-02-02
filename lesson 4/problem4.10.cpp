#include<iostream>
using namespace std;
long long gtkep(long long n){
	if(n==1) return 1;
	if(n==0) return 1;
	if(n%2==0) return n*gtkep(n-2);
	else if(n%2!=0) return n*gtkep(n-2);
}

int main(){
long long n;
	cin>>n;
	cout<<gtkep(n);
	return 0;
	
}
