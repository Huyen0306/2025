#include <vector>
#include <iostream>
using namespace std;
int main()
{
    string s1 = "dai hoc khoa hoc";
    s1 += " ";
    string s2 = "hoc";
    string luu = "";

    string result = "";

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != ' ')
        {
            luu += s1[i]; // dai
        }
        else
        {
            if (luu != s2) {
                result += luu + " ";
            }
            luu = "";
        }
    }

    cout<<result;
}