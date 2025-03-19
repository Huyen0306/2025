#include <bits/stdc++.h>
using namespace std;
//3️⃣ Nhập một chuỗi và đảo ngược chuỗi.a
int main() {
    string s;
    getline(cin, s);

    for(int i = s.size() - 1; i >= 0; i--){
        cout<<s[i];
    }
}