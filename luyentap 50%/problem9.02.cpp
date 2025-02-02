#include<iostream> 
using namespace std;
void nhapmang(int arr[], int &m){
	cin>>m;
	for(int i=0;i<m;i++){	
			cin>>arr[i];
	}
}
void xet(int arr[], int m){
	int dem=0;
	int max=arr[0];
	for(int i=0;i<m;i++){
		if(arr[i]>max) max=arr[i];
	}
	for(int i=0;i<m;i++){
		if(arr[i]==max) dem++;
	}
cout<<max<<endl;
cout<<dem;
}
int main(){
	int arr[100],m;
	nhapmang(arr,m);
	xet(arr,m);
}
