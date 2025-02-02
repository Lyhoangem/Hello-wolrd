#include<iostream>
using namespace std;


void Nhap(char xyz[][2]){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>xyz[i][j];
		}
	}
}


void Xuat(char xyz[][2]){
	int dem=0;
	for(int i=0;i<2;i++){
		for(int j=2;j<2;j++){
			if(xyz[i][j]=='#') dem++;
		}
	}
	if(dem>=3) cout<<"Yes";
	else{
		if(xyz[0][0]==xyz[0][1]&&xyz[0][0]=='#') cout<<"Yes";
		else if (xyz[0][0]==xyz[1][0]&&xyz[0][0]=='#') cout<<"Yes";
		else if(xyz[0][1]==xyz[1][1]&&xyz[0][1]=='#') cout<<"Yes";
		else if(xyz[1][0]==xyz[1][1]&&xyz[1][0]=='#') cout<<"Yes";
		else cout<<"No";
	}
}
	
int main(){
	char xyz[2][2];
	Nhap(xyz);
    Xuat(xyz);
}
