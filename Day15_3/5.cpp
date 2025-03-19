#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {
        if (s == "#") break; // Kết thúc khi gặp dấu '#'

        int checksum = 0;
        for (int i = 0; i < s.size(); i++) {
            int value = 0;
            if (s[i] == ' ') {
                value = 0;
            } else {
                value = (s[i] - 'A' + 1);
            }
            checksum += (i + 1) * value; // Nhân vị trí với giá trị ký tự
        }

        cout << checksum << endl; // Xuất kết quả
    }

    return 0;
}
