/******************************************
 * @problem   118A - String Task (Codeforces)
 * @author:   Amirul Islam
 * @language: C++
 ******************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s; int len = s.size();
    for(int i=0; i < len; i++) s[i] = tolower(s[i]);
    for (int i = 0; i < len; i++)
      if (!(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u')) cout << "." << s[i];
    cout << endl;
    return 0;
}