#include <bits/stdc++.h>
using namespace std;
// 6️⃣ Kiểm tra xem chuỗi nhập vào có chứa ký tự đặc biệt không
int main() {
    string s = "!s";
    bool check = false;

    for(int i=0; i<s.size();i++){
        if(s[i]>='!'&& s[i]<='@'){
            check=true;
        }
    }

    if (check) {
        cout<<"true";
    } else {
        cout<<"false";
    }
}