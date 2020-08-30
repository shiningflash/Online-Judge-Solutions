#include <bits/stdc++.h>
using namespace std;

int t, idx;
string s;

bool isSlump() {
    if (s[idx] != 'D' && s[idx] != 'E') return 0;
    idx++;
    if (s[idx] != 'F') return 0;
    while (s[idx] == 'F') idx++;
    if (s[idx] == 'G') { idx++; return 1; }
    return isSlump();
}

bool isSlimp() {
    if (s[idx] != 'A') return 0;
    idx++;
    if (s[idx] == 'H') { idx++; return 1; }
    if (s[idx] == 'B') {
        idx++;
        return isSlimp() && s[idx++] == 'C';
    }
    return isSlump() && s[idx++] == 'C';
}

int main() {
    cin >> t;
    puts("SLURPYS OUTPUT");
    while (t--) {
        cin >> s;
        idx = 0;
        if (isSlimp() && isSlump() && idx == s.size()) puts("YES");
        else puts("NO");
    }
    puts("END OF OUTPUT");
    return 0;
}