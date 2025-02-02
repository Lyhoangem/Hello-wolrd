#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300


bool kt(char s){
	bool check = false;
	if('0'<=s&&s<='9') check =true;
	return check;  
}


int main() {
    int dem = 0; 
    char a[MAX];
    cin.getline(a, MAX);
    cin.ignore();
    while (a[dem] != '\0') {
        if(kt(a[dem])){cout<<"CHUOI KHONG HOP LE";
        break;
		} 
        dem++;
    }
    puts(a);
    return 0;
}

