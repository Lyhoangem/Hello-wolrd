#include <iostream>
using namespace std;

int timsochinhphuong(int num) {
	int sochinhphuong;
	if (num==1) sochinhphuong = 1;
    else {
	for(int i=1;i<=num;i++){
    	if(i*i==num) {
    		sochinhphuong = num;
    		break;
		}
    	else sochinhphuong=0;
	}
	}
	return sochinhphuong;
}

long long sum_all_square(int n) {
	int sum=0;
	for(int i=1;i<=n;i++) {
		if(n%i==0) {
	sum += timsochinhphuong(i);
		}
	}
	return sum;
}

int main(){
	int a;
	cin>>a;
	cout<<sum_all_square(a);
	return 0;
}
