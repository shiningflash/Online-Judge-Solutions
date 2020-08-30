#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst; double w, l, a, b, c, x;
    for (scanf("%d", &tst); tst--; ) {
    	scanf("%lf %lf", &w, &l);
    	a = 12, b = -(4*w + 4*l), c = w*l;
    	x = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    	printf("Case %d: %.10lf\n", ++t, x * (w - 2*x) * (l - 2*x));
    }
}