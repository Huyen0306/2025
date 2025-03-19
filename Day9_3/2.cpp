#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count = 0; 
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        bool check = true;
        if (num < 2) 
            check = false;
        else if (num == 2 || num == 3) 
            check = true;
        else if (num % 2 == 0 || num % 3 == 0) 
            check = false;
        else {
            for (int j = 5; j * j <= num; j += 6) {
                if (num % j == 0 || num % (j + 2) == 0) {
                  check = false;
                    break;
                }
            }
        }

        if (check) 
         count++; 
    }
    
    cout << count << endl; 
   
}
