#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int n, dem=0;
	cin>>n;
	if(n==1) dem++;
	int i=2;
	while(i<=sqrt(n)){
		if(i*i==n) dem++;
		i++;
	}
	if(dem!=0) cout<<"Yes";
	else cout<<"No";

}
