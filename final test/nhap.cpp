#include<iostream>
using namespace std;
void nhapmang(int arr[][100], int &n, int &m){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
}

int main(){
	int arr[100][100], n ,m;
	int sothuanthuc=0, sodoi=0;
	double max=0;
	nhapmang(arr, n, m);
	
for(int i=0;i<n;i++){
	if(i==n-1) break;
	for(int j=0;j<m;j++){
		sothuanthuc=0;
			if(arr[i][j]||arr[i+1][j]){
				sothuanthuc++;
			}
		if(sothuanthuc>max) {
			sodoi=0;
			max=sothuanthuc;
		}
		if(sothuanthuc==max) sodoi++;
	}
}
		cout<<max<<endl;
		cout<<sodoi;

	}

	
	
	
	
	

