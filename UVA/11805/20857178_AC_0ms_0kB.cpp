#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, cas(0), n, k, p;
	for (scanf("%d", &t); t--; ) {
		scanf("%d %d %d", &n, &k, &p);
		k = (k + p) % n;
		printf("Case %d: %d\n", ++cas, k == 0 ? n : k);
	}
}