#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double s = (a + b + c) / 2;
        double dienTich = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << fixed << setprecision(9) << dienTich;
    } else {
        cout << "No Solution";
    }
}
