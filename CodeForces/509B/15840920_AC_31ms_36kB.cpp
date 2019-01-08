#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n , k;
  cin >> n >> k;
  int a[n+1];
  int b[n+1][n+1];

  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i][0] = a[i];
  }

  int mini = a[1], maxi = a[1];
  for (int i = 1; i <= n; i++) {
    if (mini > a[i]) mini = a[i];
    if (maxi < a[i]) maxi = a[i];
  }

  if (maxi - mini > k) {
    cout << "NO\n";
  }
  else {
    cout << "YES\n";

    for (int i = 1; i <= n; i++) {
      cout << "1";
      for (int j = 2; j <= a[i]; j++) {
        if (j <= mini) cout << " 1";
        else cout << " " << (int) (j - mini);
      }
      cout << endl;
    }
  }
  return 0;
}
