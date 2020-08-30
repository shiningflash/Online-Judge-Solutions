#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
 
int main() {
	ll q, a, b, c;
	for (scanf("%llu", &q); q--; ) {
		scanf("%llu %llu %llu", &a, &b, &c);
		printf("%llu\n", (a+b+c) / 2);
	}
}