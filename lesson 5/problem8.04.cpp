#include<iostream>
#include<string.h>
using namespace std;
#define MAX 300
void DemKyTu(char s[]);
	int myStrcmp(char s1[MAX], char s2[MAX]);
	int myStrlen(char s[], int k);
int main(){
	char s[MAX];
	cin.getline(s,MAX);
	if(myStrcmp(s, "")==0)
	cout<<"Chuoi rong."<<endl;
	else 
	DemKyTu(s);
	return 0;
}

int myStrcmp(char s1[MAX], char s2[MAX]){
	int i=0, dem=0;
	while(s1[i]!='\0'){
		if(s1[i]==s2[i]) dem++;
		i++;
	}
	return dem;
} 


int myStrlen(char s[], int k){
	
	
	
}


int DemKyTu(char s[]){
	int i=0, dem=0;
	while (s[i]!='\0'){
        dem++;
	}
	
}



