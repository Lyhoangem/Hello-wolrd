#include<iostream>
using namespace std;

int tong(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}

int main(){
int n;
cin>>n;
	double tongchuoi=0;
	for(int i=1;i<=n;i++){
		tongchuoi+=(double)1/tong(i);
	}
	
	cout<<tongchuoi;
	
} 
