#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    int max = 0;
    cin >> b;
    while (b--) {
      cin >> c;
      if (max < c) max = c;
    }
    printf("Case %d: %d\n", i, max);
  }
}