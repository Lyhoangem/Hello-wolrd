#include<iostream>
using namespace std;
long long largest_input(){
	long long n, max; 
	cin>>n;
	if(n==0) return max;
	long long maxconlai= largest_input();
	 return (n > maxconlai) ? n : maxconlai;
}
int main(){
	cout<<largest_input();
}
