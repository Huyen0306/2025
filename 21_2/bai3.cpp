#include <iostream>
using namespace std;
int main() {
    
   string a="dai hoc khoa hoc";
   int demkitu=0;
   int demtu=1;
   for(int i=0;i<a.length();i++){
        if(a[i]!=' '){
            demkitu++;
        }
        else{
            demtu++;
        }

   }
   cout<<demkitu<<endl;
   cout<<demtu;
}