#include <bits/stdc++.h>
using namespace std;

int main () {
  int t;
  scanf("%d", &t);
  while(t--) {
    int num,  sum = 0;;
    scanf("%d", &num);
    while(num > 0) {
      sum += num % 10;
      num /= 10;
    }
    printf("%d\n", sum);
  }
}