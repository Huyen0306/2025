#include <bits/stdc++.h>

 

using namespace std;

 

int main() {

    string s;

    getline(cin, s);

 

    map<char, int> result;

    for (int i = 0; i < s.size(); i++) {

        if (isalpha(s[i]) || isalnum(s[i])) { 

            result[s[i]]++;

        }

    }

    for (const auto &pair : result) {

        cout <<pair.first << "    " << pair.second << endl;

    }

}