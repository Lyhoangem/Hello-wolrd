#include<iostream>
using namespace std;

void nhap(int arr[],int &n, int &k){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>k;
}

int dem(int arr[], int n, int k){
	int dem=0;
	for(int i=0;i<n;i++){
		if(arr[i]==k) dem++;
	}
	return dem;
}


void cat(int arr[], int n, int k){
	
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			arr[i]=0;
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			for(int j=i;j<n;j++){
				if(arr[j]!=0){
					arr[i]=arr[j];
					arr[j]=0;
					break;
				}
			}
		}
	}
}

int main(){
	int arr[100], n,k;
	nhap(arr,n,k);
	int sotru=dem(arr,n,k);
	cat(arr,n,k);
	for(int i=0;i<(n-sotru);i++){
		cout<<arr[i]<<" ";
	}
	
}
