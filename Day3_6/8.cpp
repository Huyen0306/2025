#include <bits/stdc++.h>
using namespace std;

int main () {
    int arrs[8] = { 2, 3, 4, 5, 6, 7, 8, 8 };
    
    int a,b;
    cin>>a>>b;
    for(int i=0;i<8;i++){
        if(arrs[i]>=a && arrs[i]<=b){
            cout<<arrs[i]<<" ";
        }
    }
    


}