#include<iostream>
using namespace std;
void nhapmang(int arr[],int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}



int laysolonthu2(int arr[], int n){
	int dem=0, socantim;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				int temp = arr[i];
				arr[i] =arr[j];
				arr[j] =temp;
			}
		}	
	}
  int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<max){
	  socantim=arr[i];
			break;
	}
	else {
		dem++;
		if(dem==0) {
			socantim=0;
		}
	}
	}
	return socantim;
}


int main(){
	int n, arr[100];
	nhapmang(arr,n);
	
	cout<<laysolonthu2(arr,n);
	
}
