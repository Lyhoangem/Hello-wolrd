#include<iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

int daonguoc(int n){
	int songuoc = 0;
	for(int i=n;i>0;i/=10){
		songuoc= songuoc*10+i%10;
	}
	return songuoc;
}

bool isBenford(int a[],int n){
	int dem1=0, dem4=0;
	for(int i=0;i<n;i++){
		if(daonguoc(a[i])%10==4) {
			dem4++;
		}
		if(daonguoc(a[i])%10==1) dem1++;
	}
	if(dem4==1&&dem1==3) return 1;
	else return 0;
}


int main(){
	int a[MAX], n=10;
	Nhapmang(a,n);
	if(isBenford(a,n)==true)
	cout<<"TRUE"<<endl;
	else {
		cout<<"FALSE"<<endl;
	}
	return 0;
}
