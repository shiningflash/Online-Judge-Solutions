#include <bits/stdc++.h>
#define le 1000002
using namespace std;

long long n, k, a[le];

int binarysearch() {
  int count = 0; 
  for (int i = 0; i < n; i++) {
    int lo = 0, hi = n-1, mid;
    bool flag = false;
    while(hi >= lo) {
      mid = (lo + hi) / 2;
      if (a[mid] == a[i] + k) {
//        cout << i << mid << a[mid] << a[i] << endl;
        flag = true; break;
      }
      else if (a[mid] <= a[i] + k) lo = mid + 1;
      else hi = mid - 1;
    }
    if (flag) count++;
  }
  return count;
}

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a+n);
  cout << binarysearch() << endl;
  return 0;
}