#include<iostream>
#include<string.h>
using namespace std;
 #define MAX 300
 
 int myStrcmp(char s1[], char s2[]);
 int myStrlen(char s[], int k);
 void myStrcpy(char s[], int vt, char s1[], int k); 
 void mySubstr(char s[], int b, int count, char ss[]);
 bool myStrcat(char s1[], char s2[]);
 void StringReverse(char st[]);
 
 int main(){
 	
 	char s[MAX];
 	cin.getline(s,MAX);
 	if (mystrcmp(s, "")==0)
 	cout<<"Chuoi rong."<<endl;
 	else{
 		StringReverse(s);
 		cout<<s<<endl;
	 }
	 return 0;
 }
 
