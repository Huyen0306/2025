#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s); // Tran Viet Khoa
    //                 0123456789
    // Xu ly in hoa thanh in thuong
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
            
        }
    }

    stringstream ss(s);
    string a;
    vector<string> v; 
    while(ss >> a){
        v.push_back(a);
    }
// [tran, viet, khoa]
//  0    1    2
    // cout<<v[v.size()-1];

    string kq = "";
    for (int i=0; i<v.size() -1; i++){
       kq = kq + v[i][0]; 
    }

    cout<<kq+v[v.size()-1]+"@husc.edu.vn";
}
