#include<iostream>
using namespace std;
#define MAX 16
int fibo(int i){
	if(i==1||i==2) return 1;
	return fibo(i-1)+fibo(i-2);
}

void Nhapmang(int arr[][MAX], int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=fibo(i+j+1);
		}
	}
}

void Xuatmang(int arr[][MAX], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}



int main(){
	int n;
	int arr[MAX][MAX];
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	return 0;
}
