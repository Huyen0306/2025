#include <iostream>
#include <vector>
using namespace std;
int main() {
    // 
    string a="dai     KhOc       ";
    a=a+' ';
    string luu="";
    string kq = "";
    for(int i=0;i<a.length();i++){
        if(a[i]!=' '){
            luu=luu+a[i];
        }
        else{
            if (luu != "") {
                kq += luu + " ";
            }
            luu="";
        }
    }
    cout<<kq;
}