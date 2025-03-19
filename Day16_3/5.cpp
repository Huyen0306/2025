
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long copy = 0;
    for (int i = n - 1; i >= 0 ;i--) { 
        copy = copy + n;
    }    
    if (n==copy) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
}