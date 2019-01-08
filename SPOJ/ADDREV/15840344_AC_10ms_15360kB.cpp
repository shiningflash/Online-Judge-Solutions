#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int rev(ll n) {
  ll r = 0;
  while (n != 0) {
      r *= 10;
      r += (n % 10);
      n /= 10;
  }
  
  return r;
}

int main()
{
  ll n, a, b, ans;
  cin >> n;
  while(n--){
    cin >> a >> b;
    a = rev(a);
    b = rev(b);
    ans = rev(a + b);
    cout << ans << endl;
  }
  return 0;
}