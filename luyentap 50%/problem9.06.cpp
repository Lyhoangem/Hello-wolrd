#include<iostream>
#include<string.h>
#include<string>
#include<cstring> 
#include<limits>
using namespace std;
#define MAX 300



void noi(string s, string s1, int k) {
	int ds=s.length()+1; 
	int ds1 =s1.length()+1;
	if(k<0||k>ds) cout<<"Vi tri "<<k<<" khong thoa dieu kien.";
	else {
		string phu;
		int i=k,j=0;
	while(i<ds){
		phu[j]=s[i];
		j++;
		i++;
	} phu[i] ='\0';
		
	
	strcpy_s(s,ds,s1.length());
	cout<<s;
	
	
	
	
	
		
	}
	
	
	
}



int main(){
	int k;
	string s,s1;
    getline(cin, s);
    cin.ignore();
    getline(cin,s1);
    cin>>k;
    noi(s,s1,k);
    


    
    
    
    
    
    
}
