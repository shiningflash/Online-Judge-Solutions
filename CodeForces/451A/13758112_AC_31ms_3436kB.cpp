#include <bits/stdc++.h>
#define REP1(i, a, len) for(int i = a; i < len; i++)
using namespace std;

int main() {
  int n, m, move;
  cin >> n >> m;
  move =  min(n, m);
  if (move % 2 == 1) cout << "Akshat" << endl;
  else cout << "Malvika" << endl;
  return 0;
}