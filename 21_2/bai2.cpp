#include <iostream>
using namespace std;
int main(){
    string a="dai";
    string b="khoa";
    string c="hoc";
    if(a>b && a>c){
        cout<<"a lon nhat"<<endl;
    }
    else if(b>a && b>c){
        cout<<"b lon nhat"<<endl;
    }
    else if(c>a && c>b){
        cout<<"c lon nhat"<<endl;
    }
    if(a<b && a<c){
        cout<<"a nho nhat"<<endl;
    }
    else if(b<a && b<c){
        cout<<"b nho nhat"<<endl;
    }
    else if(c<a && c<b){
        cout<<"c nho nhat";
    }
    
}