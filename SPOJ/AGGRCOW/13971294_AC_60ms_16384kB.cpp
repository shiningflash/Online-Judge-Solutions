#include <bits/stdc++.h>
#define le 100002
using namespace std;

int a[le];
int n, cow;

bool ok(int mid) {
  int temp = a[0], c = 1;
  for (int i = 0; i < n; i++) {
    if ((a[i] - temp) >= mid) {
      c++;
      if (cow == c) return true;
      temp = a[i];
    }
  }
  return false;
}

int binary_search() {
  int low = 0;
  int high = a[n-1];
  int mid;
  while (high > low) {
    mid = (low + high) / 2;
    if (ok(mid)) low = mid+1;
    else high = mid;
  }
  return low-1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> n >> cow;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a+n);
    cout << binary_search() << endl;
  }
  return 0;
}