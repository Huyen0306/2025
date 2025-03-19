#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;

    vector <long long> v(n); // 4 1 5
//                              0 1 2
    vector <long long> vChan; 
    vector <long long> vLe; 

    for (auto &i : v) cin>>i;

    bool check = true;

    for (auto i = 0; i < n; i++) {
        if (i == 0) {
            if (v[i] < v[i + 1] || v[i] > v[i + 1]) {
                continue;
            } else {
                check = false;
                break;
            }
        } 
        if (i == n - 1) {
            if (v[i] < v[i + 1] || v[i] > v[i + 1]) {
                check = true;
            } else {
                check = false;
                break;
            }
        }
        if (i != 0 && i != n - 1) {
            if (v[i - 1] < v[i] && v[i] > v[i + 1] || v[i - 1] > v[i] && v[i] < v[i + 1]) {
                continue;
            } else {
                check = false;
                break;
            }
        }
    }


    if (check == true) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
}