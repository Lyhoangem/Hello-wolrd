#include<iostream>
using namespace std;
#define MAX 100

void Nhap(int &h, int &w, int arr[][MAX]){
	cin>>h>>w;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin>>arr[i][j];	
		}
	}
}

int Xuatkho(int h, int w, int arr[][MAX]){
	int min=100;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
		if(arr[i][j]<min) min=arr[i][j];
		}
	}
	
	int soluong=0;
	
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
		if(arr[i][j]>min) {
			soluong+=(arr[i][j]-min);
		}
		}
	}
	
	return soluong;
}




int main(){
	int h, w;
	int arr[MAX][MAX];
	Nhap(h,w,arr);
	cout<<Xuatkho(h,w,arr);
	
}
