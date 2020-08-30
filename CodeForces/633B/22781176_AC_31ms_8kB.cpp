/*
	@author : Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 1000000000;

ll func(ll n) {
    ll sum = 0;
    while (n != 0) {
        sum += (n / 5);
        n /= 5;
    }
    return sum;
}

ll binary_search(ll n) {
    bool f = true;
    ll low = 0, high = mx;
    while ((high - low) >= 4) {
        ll mid = (high + low) / 2;
        if (func(mid) < n) low = mid;
        else high = mid;
    }
    for (; low <= high; low++) {
        if (func(low) >= n) break;
    }
    if (func(low) != n) puts("0");
    else {
        ll i;
        printf("5\n");
        for (i = low; i < low+4; i++) printf("%lld ", i);
        printf("%lld\n", i);
    }
}

int main() {
    ll n;
    scanf("%lld", &n);
    binary_search(n);
    return 0;
}
