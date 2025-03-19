#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int dem = 1;
    while(getline(cin,a)){
        for(int i=0;i<a.length();i++){
            if(a[i]>='A' && a[i]<='Z'){
                dem++;
            }
        }
        cout<<dem<<endl;
        dem = 1;
    }
}