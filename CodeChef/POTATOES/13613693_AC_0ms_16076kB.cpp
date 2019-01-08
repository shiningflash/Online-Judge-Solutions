#include <bits/stdc++.h>
using namespace std;
int pri[10000];

int sieve()
{
    
    bool prime[100000+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=100000; p++) {
        
        if (prime[p] == true) {
            for (int i=p*2; i<=100000; i += p)
                prime[i] = false;
        }
    }
    int s = 0;
    for (int p=2; p<=100000; p++) {
       if (prime[p]) {
          pri[s++] = p;
       }
    }
}

int sss(int x, int y) {
  int i = 1, j = 0;
  while (1) {
      int z = x + y + i;
      if (z == pri[j]) {
        break;
      }
      else if (z > pri[j]) {
        j++;
      }
      else {
        i++;
      }
    }
    return i;
}

int main() {
  int t, x, y;
  scanf("%d", &t);
  sieve();
  for (int i = 0; i < t; i++) {
    scanf("%d %d", &x, &y);
    int ans = sss(x, y);
    printf("%d\n", ans);
  }
}