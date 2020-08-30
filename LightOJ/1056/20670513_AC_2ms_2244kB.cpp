#include <bits/stdc++.h>
using namespace std;

int main() {
	int tst, t(0), a, b;
	double r, theta, s, x;
	for (scanf("%d", &tst); tst--; ) {
		scanf("%d : %d", &a, &b);
		r = sqrt((a*a) + (b*b)) / 2;
		theta = acos((2*r*r - b*b) / (2*r*r));
		s = r * theta;
		x = 400 / (2*s + 2*a);
		printf("Case %d: %.8lf %.8lf\n", ++t, a*x, b*x);
	}
}