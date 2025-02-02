#include<iostream>
using namespace std;

long long sum_even_divisor(long long n){
	long long sum=0;
if(n%2!=0) return -1;
else {
for(long long  i=2;i<=n;i+=2){
	if(n%i==0) sum+=i;
}
}
	return sum;
}
long long Input(){
 long long n;
	 cin>>n;
	 return  n; 
 }
int main(){
	long long  n;
	n=Input();
	cout<<sum_even_divisor(n);
}
