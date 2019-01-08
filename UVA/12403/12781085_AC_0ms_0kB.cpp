#include <bits/stdc++.h>
using namespace std;

int main() {
  string name;
  int num = 0, cas;
  cin >> cas;
  while(cas--) {
    cin >> name;
    if (name == "donate") {
      getchar();
      int n;
      cin >> n;
      num += n;
    }
    else if (name == "report")
      cout << num << "\n";
  }
}