#include<iostream> 
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
unsigned int a, b, c;
cin>>a>>b>>c;

double p = (double)(a+b+c)/2;

double S=sqrt(p*(p-a)*(p-b)*(p-c));
cout<<fixed<<setprecision(2)<<S<<endl;

}
