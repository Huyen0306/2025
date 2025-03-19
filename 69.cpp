#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;

    vector <long long> v(n); 

    for (auto &i : v) cin>>i;

    long long tongam = 0;
    for (auto i : v) {
        if (i < 0) {
            tongam += i;
        }
    }

    cout<<tongam;
}
