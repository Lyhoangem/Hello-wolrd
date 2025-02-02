#include<iostream>
using namespace std;

void nhapmang(double arr[][100], int &n, int &m){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
}

void xetmang(double arr[][100], int n, int m){
	
	double arrb[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arrb[i][j]=arr[j][i];
		}
	}
	
	int demdong=0, demdongsai=0;
	bool check=true;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				if(arrb[i][j]!=0) demdong++;
				break;
			}
			if(i>j){
				if(arrb[i][j]!=0) demdongsai++;
			}
			
		}
	}
	
	if(demdongsai!=0){
		cout<<"No";
	}
	else{
		if(demdong==1||demdong==0){
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(i==j&&arrb[i][j]!=1) check =false;
			}
		}
		
		if(check) cout<<"Yes";
		else cout<<"No";
		
	}
	 else cout<<"No";
	}
	
	}

int main(){
	double arr[100][100];
	int n, m;
	nhapmang(arr,n,m);
	xetmang(arr,n,m);
	
}
