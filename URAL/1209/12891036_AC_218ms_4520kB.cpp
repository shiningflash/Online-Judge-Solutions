#include <bits/stdc++.h>
using namespace std;
map <int, bool> m;

int main() {
  m[1] = true;
  int pos = 1, space = 1;
  
  while (1) {
    pos += space;
    if (pos < 0) break;
    m[pos] = true;
    space++;
  }
  

  int t;
  cin >> t;
  bool next_number = false;
  
  while(t--) {
    int n;
    cin >> n;
    
    if (next_number) cout << " ";
    if (m[n]) cout << "1";
    else cout << "0";
    next_number = true;
  }
  cout << endl;
  return 0;
}