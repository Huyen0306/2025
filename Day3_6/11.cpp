#include <bits/stdc++.h>
using namespace std;

int main () {
    // int n,m;
    // cin>>n>>m;

    // while(n>20 || n<2 || m>20 || m<2) {
    //     cout<<"vui long nhap <= 20: ";
    //     cin>>n>>m;
    // }

    // int a[n][m];

    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<m; j++) {
    //         cin>>a[i][j];
    //     }
    // }
    int n = 3, m = 3;
    int a[n][m] = { 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
 

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j] + 2<<" ";
        }
        cout<<endl;
    }
}