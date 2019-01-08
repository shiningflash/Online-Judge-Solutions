// C - IQ test
// Amirul Islam

// Language: C++
#include <bits/stdc++.h>
using namespace std;

int main() {
  int num, n, even  = 0, lasteven, lastodd;
  cin >> num;
  for (int i = 1; i <= num; i++) {
    cin >> n;
    if (n % 2 == 0) {
      even++; lasteven = i;
    }
    else {
      even--; lastodd = i;
    }
  }
  cout << ((even <= 0) ? lasteven : lastodd) << endl;
  return 0;
}