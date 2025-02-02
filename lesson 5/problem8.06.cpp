#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}


int myStrcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

int myStrlen(char s[]) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

void myStrcpy(char s[], int vt, char s1[]) {
    int i = 0;
    while (s1[i] != '\0') {
        s[vt + i] = s1[i];
        i++;
    }
    s[vt + i] = '\0';
}

void StringReverse(char s[]) {
    int lengths = myStrlen(s);
    int dau = 0, cuoi = 0;

    
    while (cuoi <= lengths) {
        if (s[cuoi] == ' ' || s[cuoi] == '\0') {
            int word_len = cuoi - dau;
            for (int i = 0; i < word_len / 2; i++) {
                char temp = s[dau + i];
                s[dau + i] = s[dau + word_len - 1 - i];
                s[dau + word_len - 1 - i] = temp;
            }
            dau = cuoi + 1;
        }
        cuoi++;
    }
}



	
	
	
