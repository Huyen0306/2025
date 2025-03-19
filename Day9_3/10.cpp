#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, k;
    cin >> x >> k;

    double c = sqrt(abs(x));      // c = sqrt(|x|)
    double a = pow(c, 4) + pow(k, 3);  // a = c^4 + k^3

    double log_a = log(a) / log(3);  // log3(a) = log(a) / log(3)
    double cos_x = pow(cos(x), 5);   // cos^5(x)

    double result = log_a + cos_x;

    cout << fixed << setprecision(2) << result << endl; // In ra 2 chữ số thập phân
    return 0;
}
