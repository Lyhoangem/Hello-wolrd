#include<iostream> 
#include<cmath>
using namespace std;

struct PhanSo{
	int tuso;
	int mauso;	
};


int UCLN(int a, int b){
	a=abs(a);
	b=abs(b);
	if(b==0) return a;
	else return UCLN(b,a%b);	
}



void Nhap(PhanSo &a){
	cin>>a.tuso>>a.mauso;
	
}

PhanSo Nhap(){
	PhanSo b;
	cin>>b.tuso>>b.mauso;
	return b;
}

PhanSo Chia(PhanSo a, PhanSo b){
	
	
	
	PhanSo Chung;
	Chung.tuso = a.tuso*b.mauso;
	Chung.mauso = a.mauso*b.tuso;
	
	
	int sotoigian=UCLN(Chung.tuso,Chung.mauso);
	
	if(Chung.tuso<0&&Chung.mauso<0){
		Chung.tuso=-Chung.tuso;
		Chung.mauso=-Chung.mauso;
	}
	else if(Chung.mauso<0&&Chung.tuso>0 ){
		Chung.tuso=-Chung.tuso;
		Chung.mauso=-Chung.mauso;
	}
	
	Chung.tuso/=sotoigian;
	Chung.mauso/=sotoigian;
	
	return Chung;
}


void Xuat(PhanSo a){
	if(a.tuso%a.mauso==0) cout<<a.tuso/a.mauso;
	else cout<<a.tuso<<"/"<<a.mauso; 
	
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Chia(a, b));
    return 0;
}
