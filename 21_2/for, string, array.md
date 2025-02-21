# NOTE

=> Ghi chú về vòng lặp:

- Ví dụ: Gặp mảng, string,...
-> Thì phải chú ý: size() là số lượng phần tử nó sẽ chênh lệch 1 phần tử, index,..

```
-> Ví dụ: Ta có chuỗi hay mảng sau:
  
  string a = "abc" // a.size() = 3 nhưng index nó là 0 1 2, trường hợp muốn xuất cuối đến đầu thì size phải - 1
  int aa[3] = {1, 2, 3} // size(aa) = 3
  vector <int> a = {1, 2, 3}; // a.size() = 3
```
-> Có 2 cách chạy vòng lặp(tùy vào trường hợp sử dụng): Chạy từ đầu - cuối và cuối - đầu.

```
-> Đầu đến cuối:
  for (int i = 0; i < variable.size(); i++) {
    cout<<i;
  }
```
```
-> Cuối - đầu:
for (int i = variable.size() - 1; i >= 0; i--) {
  cout<<i;
}
```
---

```
// Bài tập ví dụ minh họa: Bài đảo ngược chuỗi: abc => cba
#include <bits/stdc++.h>
using namespace std;
// Bài đảo ngược chuỗi: abc => cba
int main() {
    string a = "abc";
    // abc -> size đếm số phần tử trong chuỗi: 3
    // 012 -> size = 3 - 1

    // }
    // abc
    // vòng 1: 2
    // vòng 2: 1
    // vòng 3: 0
    // vòng 4: -1 (sai => Kết thúc)

    for (int i = a.size() - 1; i >= 0; i--) {
        cout<<a[i];
    }
}

```


