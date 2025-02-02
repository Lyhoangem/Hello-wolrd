#include<iostream>
using namespace std;

void nhap(int arr[],int &n, int &p, int &k){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>p;
	cin>>k;
}

void cut(int arr[],int n, int p, int k){
	int c=p+k;
	if(c<=n) {
	for(int i=p;i<p+k;i++){
		arr[i]=arr[c];
		c++;
	}
	for(int i=0;i<n-k;i++){
		cout<<arr[i]<<" ";
	}
}
else {
	for(int i=0;i<p;i++){
		cout<<arr[i]<<" ";
	}
}
}

int main(){
	int arr[100], n, p,k;
	nhap(arr,n,p,k);
	cut(arr,n,p,k);
}
