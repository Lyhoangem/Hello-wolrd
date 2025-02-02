#include<iostream>
#include<string.h>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main(){
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	bool kt = myStrcat(s1,s2);
	
	if(kt){
		char sn[MAX];
		int i=0;
		while(s1[i]!='\0'){
			sn[i]=s1[i];
			i++;
		}
		
		int j=myStrlen(s1), dem2=0;
		while(s2[dem2]!='\0'){
			sn[j]=s2[dem2];
			dem2++;
			j++;
		}
		sn[j] ='\0'; 
		for(int i=0;i<myStrlen(s1)+myStrlen(s2);i++){
			cout<<sn[i];
		}
	}
	
	else {
	 cout<<"Khong noi duoc. Khong du bo nho.";
	}
}

int myStrlen(char s[]){
	int i=0, dem=0;
	while(s[i]!='\0'){
		dem++;
	i++;
	}
	return dem;
}
	
bool  myStrcat(char s1[], char s2[]){
	if(myStrlen(s1)+myStrlen(s2)>=255) return 0;
	else return 1;
}

	
	
	
