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


void chuyen(float arr[][100], int m , int n){
	int arrb[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			arrb[i][j]=arr[j][i];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arrb[i][j]<<" ";
		}
		cout<<endl;
	} 	
	}
	

int main(){
	float arr[100][100];
	int m,n;
	nhapmang(arr, m , n);
	chuyen(arr,m,n);
	return 0;
} 
