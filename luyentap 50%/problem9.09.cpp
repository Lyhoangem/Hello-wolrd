#include<iostream>
using namespace std;
#define MAX 100

void Nhap(int arr[][MAX],int &m, int &n){
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
}


void HamXet(int arr[MAX][MAX], int m, int n){
	for(int i=0;i<n;i++){
		int max=arr[i][0];
		for(int j=0;j<m;j++){
		if(arr[j][i]>max) {
			max=arr[j][i];
		}
		}
		cout<<"Gia tri lon nhat tren cot "<<i<<" la: "<<max<<endl;	
	}
	
	
	
}


int main(){
	int arr[MAX][MAX], m, n;
	Nhap(arr,m,n);
	HamXet(arr,m,n);
	return 0;
} 
