#include <bits/stdc++.h>
using namespace std;

int a[] = {2, 3, 5, 7, 13, 17, 19};

int main() {
  //freopen("inp.txt", "r", stdin);
  int n, p;
  char ch;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d%c", &p, &ch);
    bool flag = 0;
    for (int i = 0; i < 7; i++) {
      if (p == a[i]) {
        flag = 1;
        break;
      }
    }
    printf("%s\n", (flag ? "Yes" : "No"));
  }
  return 0;
}