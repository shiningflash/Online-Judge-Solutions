#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t, a, b, n;
	for (scanf("%d", &t); t--; ) {
        scanf("%d %d %d", &a, &b, &n);
        n++;
        if (n % 3 == 1) printf("%d\n", a);
        else if (n % 3 == 2) printf("%d\n", b);
        else if (n % 3 == 0) printf("%d\n", (a^b));
	}
	return 0;
}