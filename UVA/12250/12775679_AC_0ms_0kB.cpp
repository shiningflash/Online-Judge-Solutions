#include <bits/stdc++.h>
using namespace std;

int main() {
  int cas = 0;
  string name;
  while (1) {
    cin >> name;
    if (name == "#") break;
    cas++;
    printf("Case %d: ", cas);
    if (name == "HELLO") cout << "ENGLISH\n";
    else if (name == "HOLA") cout << "SPANISH\n";
    else if (name == "HALLO") cout << "GERMAN\n";
    else if (name == "BONJOUR") cout << "FRENCH\n";
    else if (name == "CIAO") cout << "ITALIAN\n";
    else if (name == "ZDRAVSTVUJTE") cout << "RUSSIAN\n";
    else cout << "UNKNOWN\n";
  }
  return 0;
}
