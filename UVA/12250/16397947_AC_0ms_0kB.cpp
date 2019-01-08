#include<cstdio>
#include<iomanip>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<sstream>
#include<stack>
#include<list>
#include<iostream>
#include<assert.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int testcase = 0;
  string name;
  while (1) {
    cin >> name;
    if (name == "#") break;
    printf("Case %d: ", ++testcase);
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
