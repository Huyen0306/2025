#include <bits/stdc++.h>
using namespace std;

int main () {
    int n = 6;
    int a[n] = { 3,2,5,4,7,6};
    bool check = false;   
    for(int i=0;i<n-1;i++){
        if(a[i] > a[i+1]){
            check=true;
        }
    }
    if(check==true){
        sort(a, a+n);
        cout << "Mang da duoc sap xep: ";
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }else{
        cout<<"Mang tang dan";
    }   
    
}