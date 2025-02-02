#include<iostream> 
using namespace std;
#define MAX 300

struct cungcau{
	int giatri_duara;
	int dong_y;
	int khong_dong_y;
};

void Nhap(cungcau arr1[], int &n, cungcau arr2[], int &m){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr1[i].giatri_duara;
	}
	for(int i=0;i<m;i++){
		cin>>arr2[i].giatri_duara;
	}
}

cungcau Gia_toanbo_codong_duara(cungcau arr1[], int n){
    cungcau gia_codong;
	for(int i=0;i<n;i++){
		int gia_tam_thoi=arr1[i].giatri_duara;
		for(int j=0;j<n;j++){
			if(arr1[j].giatri_duara>=gia_tam_thoi) arr1[i].dong_y++;
			if(arr1[j].giatri_duara<gia_tam_thoi) arr1[i].khong_dong_y++;	
		}
	}
	int sl_dongy_cao_nhat=0;
	for(int i=0;i<n;i++){
		if(arr1[i].dong_y>sl_dongy_cao_nhat) {
			sl_dongy_cao_nhat=arr1[i].dong_y;
			gia_codong.giatri_duara=arr1[i].giatri_duara;
			gia_codong.dong_y=arr1[i].dong_y;
		}
	}
	return gia_codong;
}


cungcau Nha_dautu(cungcau arr2[], int m, cungcau gia_codong_duara){
	
	for(int i=0;i<m;i++){
		if(arr2[i].giatri_duara>=gia_codong_duara.giatri_duara) arr2[i].dong_y++;
		if(arr2[i].giatri_duara<gia_codong_duara.giatri_duara) arr2[i].khong_dong_y++;
	}
	cungcau sl_dautu_dongy_thapnhat=arr2[0];
	for(int i=0;i<m;i++){
		if(arr2[i].dong_y>=sl_dautu_dongy_thapnhat.dong_y) sl_dautu_dongy_thapnhat.dong_y =arr2[i].dong_y;

	}
	
	return sl_dautu_dongy_thapnhat;
	
}

void xuat(){
	cungcau gia_codong_duara;
	cungcau soluong_dautu_chiumua;
    gia_codong_duara = Gia_toanbo_codong_duara(codong, n);	
     soluong_dautu_chiumua=Nha_dautu(dautu,m,gia_codong_duara);
     
     if(soluong_dautu_chiumua.dong_y<=gia_codong_duara.dong_y){
     	cout<<gia_codong_duara.giatri_duara;
	 }
}




int main(){
	int n,m;
	cungcau codong[MAX], dautu[MAX];
	Nhap(codong,n,dautu,m);
	Xuat()
     
}
