#include<iostream>
using namespace std;

void nhapmang(int arr[], int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

int sosanh(int arr[], int n){
	int max=arr[0], dem=0;
	for(int i=1;i<n;i++){
		if(arr[i]>max) max = arr[i];
	}
	for(int i=0;i<n;i++){
		if(max==arr[i]) dem++;
}
cout<<max<<endl; 
return dem;
}
int main(){
	 int n;
	 int arr[100];
	 nhapmang(arr,n);
	 cout<<sosanh(arr,n);
}
