// F - Olesya and Rodion
// Amirul Islam

// Language: C++
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a , b;
  cin >> a >> b;
  if (b < 10)
     for (int i = 0; i < a; i++)
        cout << b;
  else {
     if (a == 1)
        cout << -1;
     else {
         cout << 1;
         for (int i = 1; i < a; i++)
            cout << 0;
     }
  }
  cout << endl;
  return 0;
}