#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    while (scanf("%lf", &x) != EOF) {
        while (x > 18) x /= 18;
        printf("%s\n", (x <= 9 ? "Stan wins." : "Ollie wins."));
    }
}
