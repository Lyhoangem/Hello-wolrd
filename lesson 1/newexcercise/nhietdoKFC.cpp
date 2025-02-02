#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x;
	cin>>x;
	cout<<setprecision(2)<<(x-32)/1.8<<" "<<(x-32)/1.8+273.15;
	return 0;
}
