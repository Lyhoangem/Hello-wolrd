#include<iostream>
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[][MAXC], int &n){
	std::cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			std::cin>>a[i][j];
		}
	}
}

bool isMaTranDonVi(int a[][MAXC], int n){
	bool check=true; 
     for(int i=0;i<n;i++){
     	for(int j=0;j<n;j++){
     		if(i==j&&a[i][j]!=1){
     			check=false;
     			break;
			 }
			 if(i<j&&a[i][j]!=0){
			 	check=false;
			 	break;
			 }
			 if(i>j&a[i][j]!=0){
			 	check=false;
			 	break;
			 }
		 }
	 }
	return check;
}

int main(){
	int a[MAXR][MAXC], n;
	NhapMaTran(a,n);
	std::cout<<std::boolalpha<< isMaTranDonVi(a,n);
	return 0;
}
