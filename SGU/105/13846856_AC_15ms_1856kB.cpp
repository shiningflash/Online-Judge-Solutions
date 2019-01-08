#include <iostream>
long long int n;

void f(long long int n) {
  if(n % 3 == 0)
    printf("%d\n", n - (n / 3));
  else
    printf("%d\n", n - (n / 3) - 1);
}

int main() {
  scanf("%lld", &n);
  f(n);
  return 0;
}