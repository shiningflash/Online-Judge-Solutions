#include <bits/stdc++.h>
using namespace std;

double binary_search(double x, double y, double c) {
    double low = 0.0, high = x < y ? x : y, mid, cc, p, q;
    int n = 100;
    while (n--) {
        mid = (low + high) / 2.0;
        p = 1.0 / sqrt(x*x - mid*mid);
        q = 1.0 / sqrt(y*y - mid*mid);
        cc = 1.0 / (p + q);
        if (cc > c) low = mid;
        else high = mid;
    }
    return mid;
}

int main() {
    double x, y, c;
    while ((scanf("%lf %lf %lf", &x, &y, &c)) != EOF) {
        printf("%.3lf\n", binary_search(x, y, c));
    }
}