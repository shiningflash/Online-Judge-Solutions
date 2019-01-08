#include "stdio.h"
int prime[100000];
int num[1000000] = {0}, len = 0;

void siv()
{
	int N=1000000, i, j;
	for(i = 3; i < N; i += 2) {
		if(num[i] == 0) {
			prime[len++] = i;
			for(j = 3; i*j < N; j += 2)
				num[i*j] = 1;
		}
  }
}

int main(void) {
  siv();
  int i, n;
  while(scanf("%d", &n)) {
    if (n == 0) break;
    int flag = 0, a, b;
    for (i = 0; i < len; i++) {
       a = prime[i];
       b = n - prime[i];
       if (a > b) break;
       if (num[a] == 0 && num[b] == 0) {
         printf("%d = %d + %d\n", n, a, b);
         flag = 1;
         break;
       }
    }
    if (flag == 0) {
      printf("Goldbach's conjecture is wrong.");
    }
  } 
  return 0;
}