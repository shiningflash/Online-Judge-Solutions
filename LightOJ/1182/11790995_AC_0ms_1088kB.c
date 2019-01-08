#include <stdio.h>

int main() {
  int i, t, c, num, k = 0;;
  scanf("%d", &t);
  for (i = 1; i <= t; i++) {
    k = 0;
    scanf ("%d", &num);
    while (num) {
      c = num % 2;
      k = k + c;
      num = num / 2;
    }
    if (k % 2 == 0) {
      printf("Case %d: even\n", i);
    }
    else {
      printf("Case %d: odd\n", i);
    }
  }
}