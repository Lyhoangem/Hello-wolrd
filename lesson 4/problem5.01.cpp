#include<iostream>
#include<math.h>
using namespace std;

int checksonguyento(int n){
	int songuyento;
	if(n==2) return 2;
	for(int i=2;i<n;i++){
		if(n%i!=0) songuyento=n;
		else {
			songuyento=0;
			break;
		}
	}
	if(songuyento) return songuyento;
	else return 0;
}

int chay(int n){
	int dem=0,sum=0;
if(n==1) return 0;
	for(int i=2;i<=1000;i++){
		if(checksonguyento(i)) {
			sum+=i;
			dem++;
			if(dem==n) break;
		}
	}
	return sum;
}

void dieukien(int n){
	if(n>=1&&n<=50) cout<<"Tong "<<n<<" so nguyen to dau tien la: "<<chay(n);
	
    else {
    while(n<1||n>50){
	 cout<<"Gia tri vua nhap la "<<n<<", khong hop le. Vui long nhap lai."<<endl;
	 cin>>n;
	 
	if(n>=1&&n<=50) {
	 	cout<<"Tong "<<n<<" so nguyen to dau tien la: "<<chay(n);
	 	break;
	 }
		} 
	}
}



int main(){
	int n;
	cin>>n;
dieukien(n);
}

	
	

