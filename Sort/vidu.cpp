#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    vector <int> v(n); // 0 2 3 5
    vector <int> kq;
    vector <int> giam;

    for (auto &i : v) {
        cin>>i;
    }

    sort(v.begin(), v.end()); // Đã được sắp xếp.

    for (auto i : v) {
        if (i == 2 || i == 3) {
            kq.push_back(i);
        } else if (i > 4) {
            int dem = 0;
            for (int j = 1; j <= i; j ++) {
                if (i % j == 0) {
                    dem ++;
                }
            }

            if (dem == 2) {
                kq.push_back(i);
            }
        }
    } 

    for (auto i : v) {
        if (i >= 2) {
            int dem = 0;
            for (int j = 1; j <= i; j ++) {
                if (i % j == 0) {
                    dem ++;
                }
            }

            if (dem != 2) {
                giam.push_back(i);
            }
        }
    } 

    sort(giam.begin(), giam.end(), greater<int>());

    for (auto i : giam) {
        kq.push_back(i);
    }

    for (auto i : kq) {
        cout<<i<<" ";
    }
}