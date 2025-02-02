#include<iostream>
#include<cmath>
#define MAXN 101
using namespace std;

int UCLN(int a, int b){
	a=abs(a);
	b=abs(b);
if(b==0) 
	return a;
else 
	return UCLN(b,a%b);	
}

struct PhanSo{
	int tu;
	int mau;	
};

void Nhap(PhanSo arr[], int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i].tu;
		cin>>arr[i].mau;
	}
}


void Xuat(PhanSo arr[], int n){
	for(int i=0;i<n;i++){
	if(arr[i].mau==0) {
			cout<<"Khong thoa yeu cau bai toan"<<endl;
			continue;
		}
   
    else {
    	
    	if(arr[i].tu==0) cout<<0<<endl;
    	
    	else if(arr[i].tu%arr[i].mau==0) cout<<arr[i].tu/arr[i].mau<<endl;
    	
    	else {
    		int sotoigian = UCLN(arr[i].tu, arr[i].mau);
    		arr[i].tu/=sotoigian;
    		arr[i].mau/=sotoigian;
    		if(arr[i].tu<0&&arr[i].mau<0){
    			cout<<-arr[i].tu<<"/"<<-arr[i].mau<<endl;
			}
    		else if(arr[i].mau<0){
    			cout<<-arr[i].tu<<"/"<<-arr[i].mau<<endl;
			}
    		
    		
    		else 
    		cout<<arr[i].tu<<"/"<<arr[i].mau<<endl;
			
		}	
}
}
}


int main(){
	PhanSo a[MAXN];
	int n;
	Nhap(a,n);
	Xuat(a,n);
	return 0;
}

