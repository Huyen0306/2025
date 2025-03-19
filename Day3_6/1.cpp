#include <bits/stdc++.h>
//nhập vào một mảng

using namespace std;
void nhap(int n,int nums[]) {//ham nhap
    for (int i=0;i<n;i++) {//duyet mang
        cin>>nums[i];//nhap gia tri
    }
}
void xuat(int n,int nums[]) {
    for (int i=0;i<n;i++) {
        cout<<nums[i]<<" ";
    }
}

int main () {
    int n; // tạo biến n có kiểu int
    cin>>n; // 

    int nums[n];//tao mang nums co n phan tu
    nhap(n,nums);//goi ham nhap
    xuat(n,nums);//goi ham xuat
}