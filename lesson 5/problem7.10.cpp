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
void tich(float arr[][100], float arrb[][100], int m, int n , int l, int k){
	float c[m][k];
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			c[i][j]=0;
			for(int p=0;p<n;p++){
				c[i][j]+=arr[i][p]*arrb[p][j];
			}	
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

int main(){
	float arr[100][100], arrb[100][100];
	int m, n, l, k;
	nhapmang(arr,arrb,m,n,l,k);
    tich(arr,arrb,m,n,l,k);
}
