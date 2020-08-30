#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t, n, i;
	for (scanf("%d", &t); t--; ) {
        scanf("%d", &n);
        ll sum = 0;
        for (i = 1; i*i < n; i++) {
            if (n % i == 0) {
                sum += (i + (n / i));
            }
        }
        sum -= n;
        if (i * i == n) sum += i;
        printf("%lld\n", sum);
	}
	return 0;
}
