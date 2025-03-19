#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    char b;
    cin>>b;
    int dem=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==b){
            dem=dem+1;
        }      
    }
    cout<<dem;
}