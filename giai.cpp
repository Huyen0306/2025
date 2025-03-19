#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;

    vector <long long> v(n);

    for (auto &i : v) {
        cin>>i;
    }
    // b1: tổng
    long long sum = accumulate(v.begin(), v.end(), 0LL); // 19

    // b2: tìm max
    int maxValue = *max_element(v.begin(), v.end()); // 15

    // b3: tổng - max * n
    // n ?
    // b2.5: tim n max
    // int dem = 0;
    // for (auto i : v) {
    //     if (i == maxValue) {
    //         dem++;
    //     }
    // }

    long long countMax = count(v.begin(), v.end(), maxValue); 
    
    cout<<sum - (maxValue * countMax);
}