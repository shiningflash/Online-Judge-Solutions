#include <stdio.h>

int main() {
  int i, a=0, b=0, n;
  scanf("%d", &n);
  int w[n];
  for (i=0; i < n; i++) {
    scanf("%d", &w[i]);
    if (w[i]%2==0) {
      a++;
    }
    else {
      b++;
    }
  }
  if (a > b) {
    printf("READY FOR BATTLE\n");
  }
  else {
    printf("NOT READY\n");
  }
  return 0;
}