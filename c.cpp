

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;

    vector <long long> v(n); 

    vector <long long> vChan; // 4 5
    vector <long long> vLe;  // 1

    for (auto &i : v) cin>>i;

    // c1: tạo 2 vector if else
    for (auto i = 0; i < n; i++) {
        if (i % 2 == 0) {
            vChan.push_back(v[i]);
        } else {
            vLe.push_back(v[i]);
        }
    }

    bool check = true;
    for (auto i = 0; i < n; i++) { // 4 1 5 i = 1;
        if (i != 0 && i != n -1) { // 1
            if (vChan[i] < vLe[i] && vLe[i] > vChan[i+1] || vChan[i] > vLe[i] && vLe[i] < vChan[i+1]) {
                continue;
            }
            else {
                check = false;
                break;
            }
        } else {
            if (vChan[i] < vLe[i] || vChan[i] > vLe[i]) {
                continue;
            }                   
            else {
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
    

    // for (auto &i : vChan) cout<<i<<" "; // 4 5 [0]
    // for (auto &i : vLe) cout<<i<<" "; // 1 [0]



    // c2: 1 vector v if else
    
}