#include <bits/stdc++.h>
using namespace std;

int main () {
    int arrs[7] = { 2, 3, 4, 5, 6, 7, 8};
    
    for(int i = 0; i < 7; i++) {
        int num = arrs[i];
        int sqrt_num = sqrt(num);
        
        if(sqrt_num * sqrt_num == num) {
            cout << num << " la so chinh phuong" << endl;
        } else {
            cout << num << " khong phai la so chinh phuong" << endl;
        }
    }
    return 0;
}