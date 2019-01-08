#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    double x, avg = 0, cs = 0, c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      cin >> x;
      cs += x;
    }
    avg = round(cs / n);
    while (avg < k) {
      n++;
      cs += k;
      avg = round(cs / n);
      c++;
    }
    cout << c << endl;
    return 0;
}