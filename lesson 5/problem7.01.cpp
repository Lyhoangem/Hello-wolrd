#include<iostream>
using namespace std;

void nhapmang(float arr[][100], int  &m, int &n){
	cin>>m;
	cin>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
}


void xuatphantu(float arr[][100], int m, int n){
for(int i=0;i<m;i++){
	for( int j=0;j<n;j++) {
		cout<<arr[i][j]<<" ";
	}
	cout<<endl; 
} 
}

int main(){
	float arr[100][100];
	int m ,n;
	nhapmang(arr,m,n);
	xuatphantu(arr,m,n);
}
