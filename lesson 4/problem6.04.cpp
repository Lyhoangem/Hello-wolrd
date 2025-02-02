#include<iostream>
using namespace std;

bool check(int n){
	bool songuyento=true;
	if(n==1) return false; 
	if(n==2) return true;
	for(int i=2;i<n;i++){
		if(n%i==0){
			songuyento = false;
			break;
		}
		else songuyento;
	}
	return songuyento;
}

int main(){
	int n, dem=n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(check(arr[i])) cout<<arr[i]<<" ";
		else {
			dem++;
			if(dem==n) cout<<0;
		}
	}
}
