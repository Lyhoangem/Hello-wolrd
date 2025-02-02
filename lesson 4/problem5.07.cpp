#include<iostream>
#include<iomanip>
using namespace std;

double abs(double n) {
	return (n>=0)?n:-n; 
}

 double cb2(double n, double dcx =0.00001) {
 	double x=n;
	 double xp;
	 if(abs(x-xp)>dcx) return x;
	 return 0.5*(x+n/x);
 }

int calculate(int n){
	if(n==1) return 1;
	return (double)cb2(n+cb2(n-1));
}
int main(){
int n;
	cin>>n;
	cout<<setprecision(2)<<calculate(n);
}
