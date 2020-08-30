#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n, c;
    while((scanf("%lld %lld", &n, &c)) != EOF) {
        printf("%lld\n", ((n == 0) ? 0 : (n+c-1)/(n<<1)));
    }
}