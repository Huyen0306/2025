#include <bits/stdc++.h>
using namespace std;
// 4️⃣ Nhập một chuỗi và kiểm tra xem chuỗi đó có chứa ký tự số không.
int main() {
    string s;
    getline(cin, s);
    bool check = false;

    for(int i=0; i<s.size();i++){
        if(s[i]>='0'&& s[i]<='9'){
            check=true;
        }
    }

    if (check) {
        cout<<"true";
    } else {
        cout<<"false";
    }
}