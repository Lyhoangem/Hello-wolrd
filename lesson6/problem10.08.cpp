#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(char x[]) {
    cin.getline(x, 100);
}

void Nhap(SinhVien arr[], int &n) {
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cin.getline(arr[i].MASV, 10);
        cin.getline(arr[i].HoTen, 100);
        cin.getline(arr[i].NgaySinh, 12);
        cin >> arr[i].GioiTinh;
        cin >> arr[i].DiemToan;
        cin >> arr[i].DiemLy;
        cin >> arr[i].DiemHoa;
        cin.ignore();
        arr[i].DTB = (arr[i].DiemToan + arr[i].DiemLy + arr[i].DiemHoa) / 3;
    }
}

void XoaTheoHoTen(SinhVien arr[], int &n, char hoTenCanXoa[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].HoTen, hoTenCanXoa) == 0) 
        {
        strcpy(arr[i].HoTen,"0");
		}
    }
}

void Xuat(SinhVien arr[], int n) {
    for (int i = 0; i < n; i++) {
    	if(strcmp(arr[i].HoTen,"0")==0) continue;
        cout << arr[i].MASV << "\t"
             << arr[i].HoTen << "\t"
             << arr[i].NgaySinh << "\t"
             << arr[i].GioiTinh << "\t"
             << arr[i].DiemToan << "\t"
             << arr[i].DiemLy << "\t"
             << arr[i].DiemHoa << "\t"
             << setprecision(3) << arr[i].DTB << endl;
    }
}

int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}

