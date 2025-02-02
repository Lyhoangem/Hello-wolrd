#include<iostream>
#include<iomanip>
using namespace std;

long double abs(long double n) {
	return (n>=0)?n:-n;
}
int giaithua(int n) {
	if(n==0||n==1) return 1;
	return n*giaithua(n-1);
}
long double luythua(long double a, int  x){
	long double tich=1;
	for(int i=1;i<=x;i++){
		tich*=a;
	}
	return tich;
}
long double tinh(long double x) {
	long double phu = x;
    long double sum = 0; 
    int n = 0;
    while (abs((double)phu) >= 0.00001) {
        sum += phu;
        n++;
        phu = (double)-phu * x * x / (2 * n * (2 * n + 1));
    }
    return sum;
}
int main(){
	long double x;
	cin>>x;
	cout<<fixed<<setprecision(4)<<tinh(x);
}
