#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int tong=0;
    for(int i=0;i<a.length();i++){
        if(a[i]>='0' && a[i]<='9'){
            continue;
        }else{
            a[i]=' ';
        }
    }
    
    stringstream ss(a);
    string s;
    while(ss>>s){
        tong+=stoi(s);
    }
    cout<<tong;


    

}