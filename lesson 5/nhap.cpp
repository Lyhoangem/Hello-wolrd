#include <iostream>
#include <cstring>
#include<limits>

using namespace std;
int main() {
   char *thutu, Kytu;
   char str7[100]= "--hoc.cc" ;
   Kytu='c';
   thutu = strchr(str7,Kytu);
   cout<<thutu<<endl;
   cout<<str7<<endl;
   if(thutu==NULL) cout<<"Khong tim thay";
   else cout<<"tim thay tai index "<<thutu-str7;

    return 0;
}

