#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int i, t;
  string s;
  ll sum = 0;
  cin >> t;

  while (t--) {
    cin >> s;
    i = 0; sum = 0;

    while(s[i] != '\0') {
      sum += (s[i] - 48);
      i++;
    }
    
    cout << sum << endl;
  }

	return 0;
}