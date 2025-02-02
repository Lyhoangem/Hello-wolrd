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

bool duongcheo(float arr[][100], int m, int n){
	bool check = true;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		if(i>j&&arr[i][j]!=0){
			check=false;
			break;
		}
		if(i<j&&arr[i][j]!=0){
				check=false;
			break;
		}	
	}
}
return check;
}
int main(){
	float arr[100][100];
	int m,n;
	nhapmang(arr, m , n);
if(duongcheo(arr,m,n)) cout<<"Yes";
else cout<<"No";
return 0;
}


