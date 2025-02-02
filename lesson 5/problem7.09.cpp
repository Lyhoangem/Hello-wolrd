#include<iostream>
using namespace std;

void nhapmang(float arr[][100], float arrb[][100], int &m, int &n , int &l, int &k){
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	
	cin>>l>>k;
	for(int i=0;i<l;i++){
		for(int j=0;j<k;j++){
			cin>>arrb[i][j];
		}
	}
}


void tong(float arr[][100], float arrb[][100], int m, int n , int l, int k){
	float tong[m][n];
for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			tong[i][j]=arr[i][j]+arrb[i][j];
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<tong[i][j]<<" ";
		}
		cout<<endl;
	}
}



int main(){
	float arr[100][100], arrb[100][100];
	int m, n, l, k;
	nhapmang(arr,arrb,m,n,l,k);
	tong(arr,arrb,m,n,l,k);
}
