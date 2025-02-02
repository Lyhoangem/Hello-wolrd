#include<iostream>
using namespace std;
void nhapmang(int arr[],int &n, int &x, int &k){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	cin>>k;
}
void chen(int arr[], int n, int x, int k){
	for(int i=n;i>k;i--){
		arr[i]=arr[i-1];
	} arr[k]=x;
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[100];
	int n,x,k;
	nhapmang(arr,n,x,k);
	chen(arr,n,x,k);
	
}
