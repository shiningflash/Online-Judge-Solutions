#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n, w, a, b, ans = 0;
    while (scanf("%lld", &w) != EOF) {
        scanf("%lld", &n);
        ans = 0;
        while (n--) {
            scanf("%lld %lld", &a, &b);
            ans += (a * b);
        }
        printf("%lld\n", ans / w);
    }
}