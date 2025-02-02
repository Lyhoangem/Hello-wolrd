#include<iostream> 
#include<cmath>

struct PhanSo{
int tu;
int mau;
};

void Nhap(PhanSo &x){
	std::cin>>x.tu>>x.mau;
}

PhanSo Nhap(){
	PhanSo b;
	std::cin>>b.tu>>b.mau;
	return b;
}

int SoSanh(PhanSo a, PhanSo b){
	float ss1 = (float)a.tu/a.mau;
    float ss2 = (float)b.tu/b.mau;
	int kq=0;
	
	if(ss1>ss2) kq=1;
	else if(ss1<ss2) kq=-1;
	return kq;
}

int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
