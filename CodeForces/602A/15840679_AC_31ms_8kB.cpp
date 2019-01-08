#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(ll a, ll b) {
  ll c = 0, d;
  while(a--) {
    cin >> d;
    c = b * c;
    c = c + d; 
  }
  return c;
}

int main() {
	ll a, b, c, d, e;

  cin >> a >> b;
  d = f(a, b);

  cin >> a >> b;
  e = f(a, b);

//  cout << d << " " << e << endl;

  if (d < e) cout << "<" << endl;
  else if (d > e) cout << ">" << endl;
  else cout << "=" << endl;
	return 0;
}