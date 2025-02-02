#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};


void Nhap(SinhVien arr[],  int &n) {
	cin>>n;
cin.ignore();
	for(int i=0;i<n;i++) {
		cin.getline(arr[i].MASV,10) ;
		cin.getline(arr[i].HoTen,100);
		cin.getline(arr[i].NgaySinh,12);
		cin>>arr[i].GioiTinh;
		cin>>arr[i].DiemToan;
		cin>>arr[i].DiemLy;
		cin>>arr[i].DiemHoa;
	cin.ignore();
		arr[i].DTB= (arr[i].DiemToan+arr[i].DiemLy+arr[i].DiemHoa)/3;
	}
}


void Xuat(SinhVien arr[], int n){
	
	for(int i=0;i<n;i++) {
	cout<<arr[i].MASV;
	cout<<"\t";
	cout<<arr[i].HoTen;
	cout<<"\t";
	cout<<arr[i].NgaySinh;
	cout<<"\t";
	cout<<arr[i].GioiTinh;
	cout<<"\t";
	cout<<arr[i].DiemToan;
	cout<<"\t";
	cout<<arr[i].DiemLy;
	cout<<"\t";
	cout<<arr[i].DiemHoa;
	cout<<"\t";
	cout<<setprecision(3)<<arr[i].DTB<<endl;
	}
	
}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}

