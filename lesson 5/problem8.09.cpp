#include<iostream>
#include<string.h>
using namespace std;
#define MAX 255
int myStrcmp(char s1[], char s2[]);
int main(){
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	int kt = myStrcmp(s1,s2);
	cout<<kt<<endl;
	return 0;
}







int myStrlen(char s[]){
	int i=0, dem=0;
	while(s[i]!='\0'){
		dem++;
		i++;
	}
	return dem;
}

int myStrcmp(char s1[], char s2[]){
	int dem=0;
	if(myStrlen(s1)>=myStrlen(s2)){
		int i=0;
		while(s1[i]!='\0'){
			if(s1[i]>s2[i]) dem++;
			else if(s1[i]<s2[i]) dem--;
			i++;
}
	}
	else if(myStrlen(s1)<myStrlen(s2)){
		int i=0;
		while(s2[i]!='\0'){
			if(s1[i]>s2[i]) dem++;
			else if(s1[i]<s2[i]) dem--;
			i++;
}
	}
	if(dem>0) return 1;
	else if(dem<0) return -1;
	else return 0;
}
