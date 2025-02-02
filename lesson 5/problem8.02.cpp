#include<iostream>
#include<string.h>
#include<stdio.h>
#define MAX 300
using namespace std;


void myStrcpy(char s[], int vt, char s1[], int k);
void Chuanhoa(char s[]);



int main(){
	char s[MAX];
	fflush(stdin);
	fgets(s,MAX,stdin);
	
	char s1[MAX];
	myStrcpy(s1,0,s,0);
	Chuanhoa(s1);
	cout<<s<<endl<<s1<<endl;
	return 0;
	
}


void myStrcpy(char s[], int vt, char s1[], int k) {
    int i = k, j = vt;
    while (s1[i] != '\0') {
        s[j++] = s1[i++];
    }
    s[j] = '\0';
}

void  Chuanhoa(char s[]) {
    char ketqua[MAX];
    int j = 0; 

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i + 1] == '.') {
            continue;
        }

        if (s[i] == '.') {
            ketqua[j++] = s[i];
            if (s[i + 1] != ' ' && s[i + 1] != '\0') {
                ketqua[j++] = ' ';
            }
        
        else if (!(s[i] == ' ' && s[i + 1] == ' ')) {
           ketqua[j++] = s[i];
        }
    }

    ketqua[j] = '\0';
    myStrcpy(s, 0, ketqua, 0); 
}
}







