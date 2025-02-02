#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char *s);
int main()
{
	char *s;
	s = new char[MAX];
	//gets(s);	//Nhap chuoi s	
	cin.getline(s,MAX-1);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

void Chuanhoa(char s[]) {
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
	
    int i=1;
   if('a'<s[0]&&s[0]<'z') s[0]-=32;
	while(s[i]!='\0'){
		if('A'<s[i]&&s[i]<'Z') s[i]+=32;
		i++;
	}
   int j=1;
   while (s[j]!='\0') {
		if((s[j]>='a'&&s[j]<='z')){
			if(s[j-1]==' '){
				s[j]-=32;
			}
		}
		j++;
	}



	
}






