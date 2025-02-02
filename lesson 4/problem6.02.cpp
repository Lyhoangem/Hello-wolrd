#include<iostream> 
#include<cmath>
using namespace std;
#define MAX 100
void NhapmangSNT(int arr[], int &n);
int  SoPhanTuChuaY(int arr[], int n, int y);

int tachso(int a, int y){
for(int i=a;i>0;i/=10){
	if(i%10==y) return a;
}
return 0;
}

bool check(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
void NhapmangSNT(int arr[], int &n){
	cin>>n;
	int dem=0, i=2;
	while(dem<n){
	if(check(i)){
		arr[dem]=i;
		dem++;
	}i++;
}
}
int SoPhanTuChuaY(int arr[], int n, int y){
	int dem=0;
	for(int i=0;i<n;i++){
		if(tachso(arr[i],y)) dem++;
	}
	return dem;
}
int main(){
	int a[MAX],n,y;
	cin>>y;
	NhapmangSNT(a,n);
	cout<<SoPhanTuChuaY(a,n,y)<<endl;
	return 0;
	
}

