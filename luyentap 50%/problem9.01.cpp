#include<iostream> 
using namespace std;
void nhapmang(int arr[], int &m){
	cin>>m;
	for(int i=0;i<m;i++){	
			cin>>arr[i];
	}
}
void xet(int arr[], int m){
	for(int i=0;i<m;i++){
		if(i%2!=0) cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[100],m;
	nhapmang(arr,m);
	xet(arr,m);
}
