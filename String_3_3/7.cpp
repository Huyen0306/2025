#include <bits/stdc++.h>
using namespace std;
// 7️⃣ Chuyển toàn bộ ký tự trong chuỗi thành chữ hoa.
int main() {
    string s = "nguyen thi huyen";
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s;
}
