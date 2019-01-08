#include <bits/stdc++.h>
using namespace std;

int main() {
  string name;
  int cas = 0;
  while (1) {
      cas++;
      cin >> name;
      if (name == "*") break;
      printf("Case %d: ", cas);
      if (name == "Hajj") cout << "Hajj-e-Akbar\n";
      else if (name == "Umrah") cout << "Hajj-e-Asghar\n";
  }
}