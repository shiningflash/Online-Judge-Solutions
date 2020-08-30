#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int n, m = 0, x, y, a[100005];
string s;

void init() {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) m++;
        a[i] = m;
    }
}

int main() {
	getline(cin, s);
	init();
	for (scanf("%d", &n); n--; ) {
        scanf("%d %d", &x, &y);
        printf("%d\n", a[y-1] - a[x-1]);
	}
	return 0;
}
