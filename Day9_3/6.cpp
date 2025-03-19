#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (a == 0) {
        if (b == 0) 
        cout << "Many Solutions"; 
        else 
        cout << "No solution";
    } else {
        cout << fixed << setprecision(2) << -b / a << endl; 
    }
}
