#include <bits/stdc++.h>
using namespace std;
// 5️⃣ Đếm số lượng ký tự in hoa, in thường và chữ số trong chuỗi.
int main() {
    string s = "Ngu2";

    int demhoa=0;
    int demthuong=0;
    int demso=0;

    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&& s[i]<='z') {
            demthuong++;
        } else if (s[i]>='A'&& s[i]<='Z') {
            demhoa++;
        } else if (s[i]>='0'&& s[i]<='9') {
            demso++;
        }
    }

    cout<<demthuong<<demhoa<<demso;
}