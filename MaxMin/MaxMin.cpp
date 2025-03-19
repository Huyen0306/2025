#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    vector <int> v(n);

    for (auto &i : v) {
        cin>>i;
    }

    // Đi tìm max và min
    int maxValue = *max_element(v.begin(), v.end());
    int minValue = *min_element(v.begin(), v.end());
    cout<<maxValue;
    cout<<minValue;
}