#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrlen(char *s);
char* myStrcat(char *s1, char *s2);

int main()
{
    char *s1 = NULL, *s2 = NULL;
    s1 = new char[MAX];
    s2 = new char[MAX];
    s1[0] = '\0'; // Ð?m b?o s1 là chu?i h?p l?
    s2[0] = '\0'; // Ð?m b?o s2 là chu?i h?p l?

    // gets(s1);
    // gets(s2);
    cin.getline(s1, MAX-1);
    cin.getline(s2, MAX-1);    
    char *s = myStrcat(s1, s2);
    puts(s);
    delete[] s1;
    delete[] s2;
    return 0;
}

int myStrlen(char *s){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}

char* myStrcat(char *s1, char *s2){
    int ds1 = myStrlen(s1);
    int ds2 = myStrlen(s2);
    for(int i = 0; i <= ds2; i++){ // Bao g?m c? k? t? '\0' c?a s2
        s1[ds1 + i] = s2[i];
    }
    return s1;
}

