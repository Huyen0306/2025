#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    vector <int> v(n);

    for (auto &i : v) {
        cin>>i;
    }

    int sum = accumulate(v.begin(), v.end(), 0);
    int nhan =  accumulate(v.begin(), v.end(), 1, multiplies<int>());
    int tru =  accumulate(v.begin() + 1, v.end(), v[0], minus<int>());
    int chia = accumulate(v.begin() + 1, v.end(), v[0], divides<int>());

    cout<<sum;
    cout<<nhan;
    cout<<tru;
    cout<<chia;
}