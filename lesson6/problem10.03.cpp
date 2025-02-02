#include <iostream>
using namespace std;
struct PhanSo{
    int tuso;
    int mauso;
};
int UCLN(int a, int b){
    if (b == 0) return a;
    else return UCLN(b, a%b);
}
void Nhap(PhanSo &a){
    cin >> a.tuso >> a.mauso;
    if (a.mauso < 0){
        a.tuso = -a.tuso;
        a.mauso = -a.mauso;
    }
}
PhanSo Nhap(){
    PhanSo b;
    cin >> b.tuso >> b.mauso;
    if (b.mauso < 0){
        b.tuso = -b.tuso;
        b.mauso = -b.mauso;
    }
    return b;
}

PhanSo Cong(PhanSo a,PhanSo b) {
	PhanSo Chung;
	Chung.tuso = a.tuso*b.mauso+a.mauso*b.tuso;
	Chung.mauso=a.mauso*b.mauso;
	
	int sotoigian = UCLN(Chung.tuso, Chung.mauso);
	
	Chung.tuso/=sotoigian;
	Chung.mauso/=sotoigian;
	
	return Chung;
	
}

void Xuat(PhanSo a){
    if(a.tuso % a.mauso == 0) cout << a.tuso/a.mauso << endl;
    else cout << a.tuso << '/' << a.mauso << endl;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}





