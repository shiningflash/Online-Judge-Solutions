#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, a, b, c;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    scanf("%d %d %d", &a, &b, &c);
    printf("Case %d: ",i);
		if(a<=20 && b<=20 && c<=20) printf("good\n");
    else printf("bad\n");
  }
  return 0;
}