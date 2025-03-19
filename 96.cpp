#include <bits/stdc++.h>
using namespace std;

int result(vector<int>& v) {
    unordered_map<int, int> freq;
    int maxFreq = 0, ans = 0;

    for (int i = 0; i < v.size(); i++) {
        freq[v[i]]++;

        if (freq[v[i]] > maxFreq) {
            maxFreq = freq[v[i]];
        }
    }

    for (int i = 0; i < v.size(); i++) {
        for (auto j : freq) {
            if (v[i] == j.first && maxFreq == j.second) {
                ans = v[i];
                break;
            }
        }
        if (ans != 0) {
            break;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &i : v) {
        cin >> i;
    }

    cout << result(v) << endl;
}
