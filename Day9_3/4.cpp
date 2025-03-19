#include<bits/stdc++.h>
using namespace std;
int main(){
   long long x;
   cin>>x;
   if(x>3){
   	cout<<x*x*x+2*x*x+5*x<<endl;
   }
   else if(x>=1&&x<=3){
   	cout<<x*x-2*x+4<<endl;
   }
   else if(x<1){
    cout<<5*x-8;
   }
}