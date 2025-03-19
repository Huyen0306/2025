#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;

    vector <long long> h(n); // h
    vector <long long> c(n); // c

    for (auto &i : h) {
        cin>>i;
    }
    
    for (auto &i : c) {
        cin>>i;
    }

    // int dH = 0;
    // int dC = 0;
    map<string, int> m;
    for (auto i = 0; i < n; i++) {
        if (h[i] > c[i]) {
            // dH++;
            m["hùng"]++;
        }
        if (h[i] < c[i]) {
            // dC++;
            m["cường"]++;
        }
    }
    //
    cout<<m["hùng"]<<" "<<m["cường"];
    // cout<<dH<<" "<<dC;
}
