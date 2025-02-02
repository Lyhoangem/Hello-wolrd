#include<iostream>
#include<iomanip>
#include<string.h>
#include<cmath> 

using namespace std;


struct DATHUC{
	int heso;
	int somu;
};

DATHUC* Nhap(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>B[i].tuso;
		cin>>B[i].mauso;	
	}
	return B;
}

void Xuat(DATHUC &B){
	
		
		
		
	}
	
	


int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
} 
