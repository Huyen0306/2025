#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    int soduong=0;
    int soam=0;
    int sochan=0;
    int sole=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x; 
    if(x<0){
            soam++;
     } 
    
    if(x>0){
        soduong++;
    }
    
    if(x%2==0){
        sochan++;
    }
    if(x%2!=0){
        sole++;
    }
}
    cout<<soam<<endl;
    cout<<soduong<<endl;
    cout<<sochan<<endl;
    cout<<sole;


}
