#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    getline(cin,s1);
    string s2 ;
    getline(cin,s2);
    string result = "";
// a
// bcde
    // s1[0] + s2[0]
    int ngan = 0;
    int dai = 0;
    if (s1.size() <= s2.size()) {
        ngan = s1.size();
        dai = s2.size();
    }
    if (s2.size() <= s1.size()) {
        ngan = s2.size();
        dai = s1.size();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    }
    string kq = "";
    for (int i = 0; i < ngan; i++) {
        kq = kq + s1[i] + s2[i]; //ab
    }

    for (int i = ngan; i < dai; i++) {
        if (dai == s2.size()) {
            kq = kq + s2[i];
        }
        if (dai == s1.size()) {
            kq = kq + s1[i];
        }
    }
    cout<<kq;
}
