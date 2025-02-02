#include<iostream>
using namespace std;

bool check(long long nt){
	bool nguyento=true;
if(nt<2) return false;
if(nt==2) return true;
for(long long i=2;i*i<=nt;i++){
	if(nt%i==0) {
		nguyento=false;
		break;
	}
	}
return nguyento;
}

long long quaydau(long long n){
	long long soquaydau=0;
while(n>0){
	soquaydau=10*soquaydau+n%10;
	n/=10;
}
	return soquaydau;
}

long long hamchay(long long m,long long n){
	long long dem=0;
	long long i=m;
	while(i<=n){
		if(check(i)){
		long long qd = quaydau(i);
			if(check(qd)) dem++;
		}
		i++;	
	}
	return dem;
}

int main(){
long long a,b;
	cin>>a>>b;
	cout<<hamchay(a,b);
}
