#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> v = {1, 2, 8, 4, 5, 6};
    vector <double> a = {1, 2, 8, 4, 5, 6};


    sort(a.begin(), a.end()); // Sort 2 tham số => sắp xếp bé đến lớn
    // sort(v.begin(), v.end(), greater<int>()); // Sort 3 tham số => sắp xếp lớn đến bé
    sort(v.rbegin(), v.rend());

    for (auto i : a) {
        cout<<i<<" ";
    }

    for (auto i : v) {
        cout<<i<<" ";
    }
}