#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n;
    scanf("%lld", &n);
    printf("%lld\n", (n & 1) ? -(n + 1) / 2 : n / 2);
}
