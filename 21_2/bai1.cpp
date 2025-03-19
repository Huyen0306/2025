#include <iostream>
using namespace std;
int main() {
    
    string s1 = "dai hoc";
    string s2 = "hocx";
    size_t vitri = s1.find(s2);    // Changed from string to size_t
    
    if (vitri != string::npos) {
        cout << vitri << endl;
    } else {
        cout << "khong tim thay" << endl;
    }
    return 0;
}