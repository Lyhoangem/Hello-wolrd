#include<iostream>
using namespace std;
void ghepmang(int arr1[],int n, int arr2[],int m);
void nhapmang(int arr1[], int &n, int arr2[], int &m){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	ghepmang(arr1,n,arr2,m);
}
void ghepmang(int arr1[],int n, int arr2[],int m){
	int k=m+n;
	int dem=n, i=0;
	while(dem<k){
		arr1[dem] = arr2[i];
		dem++;
		i++;
	} 
}


int main(){
	int arr1[100], n, arr2[100],m;
	nhapmang(arr1,n,arr2,m);
	for(int i=0;i<m+n;i++){
		for(int j=i+1;j<m+n;j++){
			if(arr1[i]>arr1[j]){
				int temp =arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	for(int i=0;i<n+m;i++){
		cout<<arr1[i]<<" ";
	}
}
	
