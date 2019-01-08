#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, array[1001], min_ = 0;
  cin >> n >> m;
  
  for (int i = 0; i < m; i++) {
    cin >> array[i];
  }
  sort(array, array+m);
  
  min_ = array[n-1] - array[0];
  for (int i = 1; i <= m-n; i++) {
    min_ = min(array[n + i - 1] - array[i], min_);
  }
  
  cout << min_ << endl;
  return 0;
}