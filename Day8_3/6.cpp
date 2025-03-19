    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        
        vector <string> ss;
        for (int i = 0; i < n; i++) {
            string s;
            fflush(stdin);
            getline(cin, s);
            ss.push_back(s);
        }

        vector <string> sss;
        string tmp = "";
        for (int i = 0; i < ss.size(); i++) {
            for (int j = 0; j < ss[i].size(); j++) {
                if (ss[i][j] == ' ') {
                    tmp += "%20";
                }
                else if (ss[i][j] == '!') {
                    tmp += "%21";
                }
                else if (ss[i][j] == '$') {
                    tmp += "%24";
                }
                else if (ss[i][j] == '%') {
                    tmp += "%25";
                }
                else if (ss[i][j] == '(') {
                    tmp += "%28";
                }
                else if (ss[i][j] == ')') {
                    tmp += "%29";
                }
                else if (ss[i][j] == '*') {
                    tmp += "%2a";
                } else {
                    tmp += ss[i][j];
                }
            }
            cout<<tmp<<endl;
        }
    }
