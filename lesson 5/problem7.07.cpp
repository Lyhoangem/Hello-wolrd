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


bool doixung(float arr[][100], int m, int n){
	float arrb[m][n];
	
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		arrb[i][j]=arr[i][j];
		}
		}
	
	
	
	bool check=true;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(arrb[j][i]!=arr[i][j]){
				check = false;
				break;
			}
		}
	}
	return check;
}



main(){
	float arr[100][100];
	int m,n;
	nhapmang(arr,m,n);
	if(doixung(arr,m,n)) cout<<"Yes";
	else cout<<"No";
	return 0;
}
