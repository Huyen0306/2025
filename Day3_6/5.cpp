#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n; //1 3 -100

    while(n < 10 || n > 100) {
        cout<<"Vui long nhap 10 <= n <= 100: ";
        cin>>n;
    }

    int a[n];
    for(int i=0;i<n;i++) {
       cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}