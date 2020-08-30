#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int r, c, x;
	for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &x);
            if (x == 1) c = i, r = j;
        }
	}
	r = r > 2 ? r - 2 : 2 - r;
	c = c > 2 ? c - 2 : 2 - c;
	printf("%d\n", r + c);
	return 0;
}
