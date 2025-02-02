#include<iostream>
using namespace std;

void nhapmang(float arr[][100], int &m, int &n){
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
}

float trace(float arr[][100], int m , int n){
	
	
	float sum=0;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==j) sum+=arr[i][j];
		}
	}
	
	return sum;
	
}


int main(){
	float arr[100][100];
	int m,n;
	nhapmang(arr, m , n);
	cout<<trace(arr,m,n);
}
