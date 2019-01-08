#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  int ara[t];
  for (int i = 0; i < t; i++) cin >> ara[i];
  sort(ara, ara+t);
  for (int i = 0; i < t-1; i++) cout << ara[i] << " ";
	cout << ara[t-1] << endl;
  return 0;
}