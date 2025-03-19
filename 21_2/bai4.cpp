#include <iostream>
using namespace std;
int main() {
    // 
    string a="dai KhOc";
    for(int i=0;i<a.length();i++){//is lower
        if(a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z'){//is upper
            a[i]=a[i]+32;
        }
    }
    cout<<a;
}