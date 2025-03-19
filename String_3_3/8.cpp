#include <bits/stdc++.h>
using namespace std;
// Xóa toàn bộ khoảng trắng dư thừa trong chuỗi.
int main() {
    string s = "nguyen thi huyen(*@&#*(&@#(*&@#(*))))";
    
    vector <string> lists;

    stringstream ss(s);
    string k;
    while(ss >> k) {
        lists.push_back(k);
    }

    for(string zxcv : lists) {
        cout<<zxcv;
    }
}