#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n, k;
  int a[10001];
  scanf("%d", &t);
  while(t--) {
      memset(a, 0, sizeof(a));
      scanf("%d", &n);
      for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        a[k]++;
      }
      int maximum = 0, pos = 0;
      for(int i = 0; i < 10001; i++) {
        if(a[i] > maximum) {
            maximum = a[i];
            pos = i;
        }
      }
      printf("%d %d\n", pos, maximum);
  }
  return 0;
}
