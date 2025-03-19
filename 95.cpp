#include <bits/stdc++.h>
using namespace std;

void a (int n, int k,int A[], int B[]) {
    vector<int> trai;
    for (auto i = abs(n - k); i < n; i++) {
        trai.push_back(A[i]);
    }
    for (auto i = 0; i < abs(n - k); i++) {
        trai.push_back(A[i]);
    }

    vector<int> phai;
    for (auto i = k; i < n; i++) {
        phai.push_back(B[i]);
    }
    for (auto i = 0; i < k; i++) {
        phai.push_back(B[i]);
    }

    for (int i = 0; i < n; i++) {
        cout<<trai[i]+phai[i]<<" ";
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int A[n];
    int B[n];
    
    for (auto &i : A) cin>>i;
    for (auto &i : B) cin>>i;

    a(n, k, A, B);
}
