#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  int ara[t], count = 1;
  cin >> ara[0];
  
  for (int i = 1; i < t; i++) {
    cin >> ara[i];
    if (ara[i] != ara[i-1]) count++;
  }
  cout << count << endl;
  return 0;
}