#include<iostream>
using namespace std;


void Nhap(double phantu[], int &m, int &n){
	cin>>m>>n;
	for(int i=0;i<m*n;i++){
		cin>>phantu[i];
}
}


void Xuat(double arr[][100], double phantu[], int m, int n){
	int dem=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=phantu[dem];
			dem++;
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}




int main(){
double arr[100][100];
	double phantu[100];
	int m,n;
	Nhap(phantu,m,n);
	Xuat(arr,phantu,m,n);
	
	
} 
