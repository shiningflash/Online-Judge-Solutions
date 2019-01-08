#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  getchar();
  while (test--) {
    string data;
    int num, cas = 0, sum = 0, g = 0;
    int ara[100];
    getline(cin, data);
    stringstream ss(data);
    while (ss >> num) {
      ara[cas++] = num;
    }
    for (int i = 0; i < cas-1; i++) {
      for (int j = i+1; j < cas; j++) {
        g = __gcd(ara[i], ara[j]);
        sum = max(sum, g);
      }
    }
//    cout << cas << "  cas\n";
    cout << sum << '\n';
  }
  return 0;
}