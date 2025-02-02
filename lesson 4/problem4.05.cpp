#include<iostream>

 long long TongChuSo(long long n){
 	long long sum=0;
 	for(long long i=n;i>0;i/=10){
 		sum+=i%10;
	 }
	 return sum;
 }
 
void input(int &n) { 
 	std::cin>>n;
 }
int main(){
 	int n;
 	input(n);
 	std::cout<<TongChuSo(n);
 	return 0;
 } 
