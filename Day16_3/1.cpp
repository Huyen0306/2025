#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double tbc=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        tbc=tbc+x;
   }
   cout<<fixed<<setprecision(2)<<tbc/n;

}
