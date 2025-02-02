#include<iostream>
#define MAX 300
using namespace std;

void nhapmang(int arr[][MAX], int &n, int &m){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	
}




for(int i=0;i<n;i++){
		if(i=n-1) break;
		for(int j=0;j<m;j++){
			if(arr[i][j]||arr[i+1][j]) sothuanthuc++;
			if(max=sothuanthuc) sodoi++;
			if(sothuanthuc>max) max=sothuanthuc;		
		}	
		}

int sosanh( int a, int b){
	int dem=0;
	if(a||b) dem++;
	return dem;
	}
	
	
int tohop(int arr[][MAX], int n, int m){
	int max=0, sothuanthucca2;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i=n-1) sothuanthucca2 = sosanh(arr[i][j],arr[0][j])
			 sothuanthucca2 = sosanh(arr[i][j],arr[i+1][j]);
			 if(sothuanthucca2>max) max=sothuanthucca2
		}
	}
	return sothuanthucca2;
	return max;
}
	
	
int main(){
	int arr[MAX][MAX], n, m;
	nhapmang(arr,n,m);
	cout<<tohop(arr,n,m);
}
