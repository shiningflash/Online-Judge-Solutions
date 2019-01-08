#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, input;
  cin >> n;
  int a[n+1];
  for (int i = 1; i <= n; i++) {
    cin >> input;
    a[input] = i;
  }
  cout << a[1];
  for (int i = 2; i <= n; i++)
    cout << " " << a[i];
  cout << endl;
  return 0;
}