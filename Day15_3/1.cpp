#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int dem=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            dem++;
        }
    }
    cout<<dem;
}
