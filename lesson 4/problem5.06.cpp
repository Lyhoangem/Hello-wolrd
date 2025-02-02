#include<iostream>
using namespace std;
int gcd(int m,int n){
	if(n==m) return n;
	if(m==0) return n;
	if(n==0) return m;
 
  int k=(m>n)?(m%n):n%m;
  if(m>n){
  	m=n;
  	n=k;
  	k=m%n;
  	if(k==0) return n;
	  return gcd(m,n) ;
	   }
  	
  	else if (n>m)
	  {
  		n=m;
  		m=k;
  		k=n%m;
  		if(k==0) return m;
  		return gcd(n,m);
	  }
  }



int main(){
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n);
	return 0;
}
