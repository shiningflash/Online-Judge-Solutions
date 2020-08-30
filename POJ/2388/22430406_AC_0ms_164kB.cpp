#include <stdio.h>
#include <algorithm>
using namespace std;

int a[10005];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	sort(a, a+n);
	printf("%d\n", a[n/2]);
	return 0;
}