#include<iostream>
#include<string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main(){
    char s[MAX], s1[MAX];
    fgets(s, MAX, stdin);
    fgets(s1, MAX, stdin);
    int k;
    cin >> k;
    if (k < 0 || k > myStrlen(s, 0))
        cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
    else {
         ChenChuoiTaiVitriK(s,s1,k);
    }
}

int myStrlen(char s[], int k){
    int length = 0;
    while(s[k+ length] != '\0' && s[k+length] != '\n'){
        length++;
    }
    return length;
}

void myStrcpy(char s[], int vt, char s1[], int k){
    int i = 0;
    while (s1[i] != '\0'){
        s[vt + i] = s1[k+i];
        i++;
    }
    s[vt + i] = '\0';
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k){
    
    int dodais = myStrlen(s,0);
    int  dodais1= myStrlen(s1,0);

    char phu[MAX];
    int i = 0;
    
    for (int j = 0; j < k; j++){
       phu[i++] = s[j];
    }

   for (int j = 0; j < dodais1; j++){
        phu[i++] = s1[j];
   }

    for (int j = k; j < dodais; j++){
        phu[i++] = s[j];
    }
    phu[i] = '\0';
    cout << phu << endl;
}
