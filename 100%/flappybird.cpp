#include<iostream>
using namespace std;

void Nhap(int &n, int *&cotduoi, int *&cottren) {
    cin >> n;
    cotduoi = new int[n];
    cottren = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> cotduoi[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> cottren[i];
    }
}

void tim_vi_tri(int N, int cotduoi[], int cottren[]) {
    int max = cotduoi[0];
    int min = cottren[0];
    
    for(int i = 0; i < N; i++) {
        if(cotduoi[i] > max) max = cotduoi[i];
    }
    for(int i = 0; i < N; i++) {
        if(cottren[i] < min) min = cottren[i];
    }
    
    int dem = min - max + 1;
    if(dem <= 0) cout << 0;
    else cout << dem;
}

int main() {
    int N;
    int *cotduoi, *cottren;
    
    Nhap(N, cotduoi, cottren);
    tim_vi_tri(N, cotduoi, cottren);
    
    delete[] cotduoi;
    delete[] cottren;
    return 0;
}
