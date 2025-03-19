#include <bits/stdc++.h>
using namespace std;

int main () {
    int arrs[7] = { 2, 3, 4, 5, 6, 7, 8 };
    
    // for (int i = 0; i < 7; i++) {
    //     if(arrs[i] % 2 == 0  && arrs[i]>4){
    //         cout << arrs[i] << " ";
    //     }
    // }
    int tong=0;
    int dem=0;
    for (int i = 0; i < 7; i++) {
        if(arrs[i] % 2 == 0){
            tong=tong+arrs[i];
            dem++;
        }
    }
    if(tong/dem>4 ){
        cout<<tong/dem;
    }

}