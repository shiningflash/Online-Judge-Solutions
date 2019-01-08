#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int max(int a, int b) {
  if (a > b) return a;
  else  return b;
}

int main() {
  int n, pl = 0, ul = 0, us = 0, ur = 0, no = 0;
  cin >> n;

  for(int i = 1; i <= n; i++) {
      cin >> ur;
      ul += (ur == 1);
      if(pl == 0 && ur == 1) us++;
      pl = ur;
  }

  no = ul + max(us - 1, 0);
  cout << no << endl;
  return 0;
}