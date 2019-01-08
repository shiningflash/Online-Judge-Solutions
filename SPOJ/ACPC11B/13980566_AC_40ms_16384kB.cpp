#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n1, n2, d;
  cin >> t;

  while (t--) {
    cin >> n1;
    int a1[n1];
    for (int i = 0; i < n1; i++) cin >> a1[i];

    cin >> n2;
    int a2[n2];
    for (int i = 0; i < n2; i++) cin >> a2[i];

    sort(a1, a1 + n1);
    sort(a2, a2 + n2);

    int min = 1000000;

    for (int i = 0; i < n1; i++) {
      for (int j = 0; j < n2; j++) {
        d = abs(a1[i] - a2[j]);
        min = ((min > d) ? d : min);
      }
    }
    cout << min << endl;
  }
}