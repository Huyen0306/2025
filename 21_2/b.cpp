#include <iostream>
using namespace std;

int calculateProduct(int a, int b) {
    return a * b;
}

int main() {
    string s1="hi worl";
    string s2="i";
    s1.replace(1,4,s2);
    cout<<s1;
}