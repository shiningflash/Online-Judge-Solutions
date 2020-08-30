#include <iostream>
using namespace std;
 
int main() {
	int t, n, m;
	for (scanf("%d", &t); t--; ) {
		long long int sum = 0;
		for (scanf("%d", &n); n--; ) {
			scanf("%d", &m);
			if (m <= 2048) sum += m;
		}
		printf("%s\n", (sum >= 2048 ? "YES" : "NO"));
	}
	return 0;
}
