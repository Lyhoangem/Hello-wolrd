#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien &X){
	cin.getline(X.MASV,10);
	cin.getline(X.HoTen,100);
    cin.getline(X.NgaySinh,12);
    cin>>X.GioiTinh;
	cin>>X.DiemToan;
	cin>>X.DiemLy;
	cin>>X.DiemHoa;
	X.DTB=(X.DiemToan+X.DiemLy+X.DiemHoa)/3;
}



void Xuat(SinhVien X){
	cout<<X.MASV;
	cout<<"\t";
	cout<<X.HoTen;
	cout<<"\t";
	cout<<X.NgaySinh;
	cout<<"\t";
	cout<<X.GioiTinh;
	cout<<"\t";
	cout<<X.DiemToan;
	cout<<"\t";
	cout<<X.DiemLy;
	cout<<"\t";
	cout<<X.DiemHoa;
	  cout<<"\t";
	cout<<setprecision(3)<<X.DTB;
}


int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
