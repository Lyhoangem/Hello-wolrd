#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
#define MAX 300


int myStrlen(char s[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void Chuanhoa(char s[]); 

int main(){
	char s[MAX];
	fgets(s,MAX,stdin); //nhap chuoi 
	Chuanhoa(s); 
	cout<<s<<endl;
	return 0;
}

void Chuanhoa(char s[]){
	int k=0;
	while(s[k]!='\0'){
		if(s[0]==' '){
			int p=0;
			while(s[p]!='\0'){
				s[p]=s[p+1];
				p++;
			}
	}
		k++;
	}
	int i=1, j=1; 
	if(s[0]>='a'&&s[0]<='z') s[0]-=32;
	while(s[i]!='\0'){
		if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
		i++;
	}	
	while (s[j]!='\0') {
		if((s[j]>='a'&&s[j]<='z')){
			if(s[j-1]==' '){
				s[j]-=32;
			}
		}
		j++;
	}
	
}
