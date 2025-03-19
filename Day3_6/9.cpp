#include <bits/stdc++.h>
using namespace std;

int main () {
    int arrs[8] = { 2, 3, 4, 5, 6, 7, 8, 8 };
    int max=0;
    for(int i=0;i<8;i++){
        if(arrs[i]>max){
            max=arrs[i];
        }
    }
    cout<<max;
}