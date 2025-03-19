#include <bits/stdc++.h>
using namespace std;
// 1️⃣2️⃣ Nhập vào một chuỗi và đếm số lượng từ trong chuỗi.
int main() {
    string s = "10-00101";

    vector <string> sss;

    stringstream ss(s);
    string w;
    while (ss >> w)
    {
        sss.push_back(w);
    }

    int max = 0;
    string tunao = "";
    for (string x : sss) {
        if (x.size() > max) {
            max = x.size();
            tunao = x;
        }
    }

    cout<<max<< " = ";
    cout<<tunao;
}