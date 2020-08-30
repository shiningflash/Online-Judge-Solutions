#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int oo = 0, nn = 0, ee = 0, zz = 0, rr = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') oo++;
        else if (s[i] == 'n') nn++;
        else if (s[i] == 'e') ee++;
        else if (s[i] == 'z') zz++;
        else if (s[i] == 'r') rr++;
    }
    int one = min(oo, min(nn, ee));
    oo -= one;
    nn -= one;
    ee -= one;
    int zero = min(zz, min(ee, min(rr, oo)));
    for (int i = 0; i < one; i++) {
        if (i == 0) cout << "1";
        else cout << " 1";
    }
    for (int j = 0; j < zero; j++) {
        if (j == 0 && one > 0) cout << " 0";
        else if (j == 0 && one == 0) cout << "0";
        else cout << " 0";
    }
    cout << "\n";
}