#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;

    while(true) {
        getline(cin, s);

        stringstream ss(s);
        string x;
        while (ss >> x)
        {
            cout<<x<<' ';
        }
        cout<<endl;
    }
}
