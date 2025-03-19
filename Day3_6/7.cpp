#include <bits/stdc++.h>
using namespace std;

int main () {
    int a[7] = { 1, 1,-4, -5, -6, -7, -8 };
    int tong=0;
    bool check = false;
    for(int i = 0; i < 7; i++) {
        if (i % 2 != 0 && a[i] > 0) {
           tong=tong+a[i];
           check = true;
        }
    }
    
    if(check) {
    	cout<<tong;
    } else {
        cout<<"Khong co so duong";
    }
}