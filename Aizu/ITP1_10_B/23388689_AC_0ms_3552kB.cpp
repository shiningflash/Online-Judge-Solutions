#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const double PI = acos(-1.0);

int main() {
    // freopen("in.txt", "r", stdin);

    double a, b, c, A, B, C;
    cin >> a >> b >> C;
    C = PI * C / 180;
    c = sqrt(a*a + b*b - 2.0*a*b*cos(C));

    double s = a * b * sin(C) / 2;
    double l = a + b + c;
    double h = 2 * s / a;
    cout << setprecision(10) << s << " " << l << " " << h << endl;

    return 0;
}
