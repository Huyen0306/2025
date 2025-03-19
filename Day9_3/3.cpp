#include <iostream>
using namespace std;
int main() {
    string a ;
    getline(cin,a);
    string luu = "";
    string result = "";
    
   
    a += " ";
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '.') {
           a[i] = ' ';
        }
        else {
           
            if(result == "") {
                result = luu;
            } else {
                result = luu + " " + result;
            }
            luu = "";
        }
    }
    
    cout << result << endl;
    return 0;
}