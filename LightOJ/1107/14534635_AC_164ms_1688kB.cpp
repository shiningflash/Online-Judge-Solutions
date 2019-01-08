#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, x1, y1, x2, y2, a, b, cow;
  scanf("%d", &t);

  for (int i = 1; i <= t; i++) {
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d", &cow);

    cout << "Case " << i << ":" << endl;

    while (cow--) {
      cin >> a >> b;
      if ((a > x1 && a < x2) && (b > y1 && b < y2)) {
        cout << "Yes" << endl;
      }
      else {
        cout << "No" << endl;
      }
    }
  }
}
