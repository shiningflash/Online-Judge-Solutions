#include <bits/stdc++.h>
using namespace std;

int tst, t = 1, a1, b1, c1, a2, b2, c2;
double A, B, C, T;

double sqr(double a) {
    return a*a;
}

double len(double a, double b, double c, double d) {
    return sqrt(sqr(b-a) + sqr(d-c));
}

int main() {
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d %d %d %d %d", &c1, &c2, &a1, &a2, &b1, &b2);
        C = len(a1, b1, a2, b2);
        A = len(b1, c1, b2, c2);
        B = len(a1, c1, a2, c2);
        T = acos((sqr(A) + sqr(B) - sqr(C)) / (2.0 * A * B));
        printf("Case %d: %.8lf\n", t++, A*T); // s = r*Theta
    }
}
