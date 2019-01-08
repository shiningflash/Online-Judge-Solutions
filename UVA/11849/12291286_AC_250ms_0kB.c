#include <stdio.h>
#include <string.h>
long int ara[2000010];
int main(void) {
  long int m, n;
  scanf("%ld %ld", &m, &n);
  while(m != 0 || n != 0) {
    long int num;
    memset(ara, 0, sizeof(ara));
    long int i, ans = 0;
    for (i = 0; i < m; i++) {
      scanf("%ld", &num);
      ara[num] = 1;
    }
    for (i = 0; i < n; i++) {
      scanf("%ld", &num);
      if (ara[num] == 1) ans++;
    }
    printf("%ld\n", ans);
    scanf("%ld %ld", &m, &n);
  }
  return 0;
}