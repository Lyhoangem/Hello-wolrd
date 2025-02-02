#include<iostream> 
using namespace std;

int TongUocChung(int a,int b){
	int sum=0;
	if(a<b){
		for(int i=1;i<=a;i++){
			if(a%i==0&&b%i==0) sum+=i;
		}
	}
	
	else if (a>b){
		for(int i=1;i<=b;i++) {
	if(a%i==0&&b%i==0)	sum+=i;
		}
	}

else {
		for(int i=1;i<=b;i++) {
			if(a%i==0&&b%i==0) sum+=i;
		}
}
return sum;	
}

void input(int &k){
	cin>>k;
}

int input(){
	int k;
	cin>>k;
	return k;
}

int main(){
	int a,b;
	a=input();
    input(b);
	cout<<TongUocChung(a,b);
	return 0;
}
