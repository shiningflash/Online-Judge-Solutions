#include <bits/stdc++.h>
#define le 1000002
using namespace std;

long long n, m, a[le];

int solve() {
  int maxval = a[0], temp = a[0], indx = 0;
  for (int i = 1; i < n; i++) {
    if((temp + a[i]) > a[i]) temp += a[i];
    else temp = a[i];
    while (temp > m) {
      temp -= a[indx++];
      if (temp == m) maxval = temp;
    }
    maxval = max(maxval, temp);
  }
  return maxval;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) cin >> a[i];
  cout << solve() << endl;
  return 0;
}