// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;

const int mx = 2e6;

string s;
int k;

void comb(string cur, int pos) {
    if (k == cur.size()) {
        for (int i = 0; i < k; i++) cout << cur[i];
        cout << endl;
        return;
    }
    for (int i = pos; i < s.size(); i++) {
        comb(cur+s[i], i+1);
        while (s[i] == s[i+1]) i++;
    }
}

int main() {
    while (cin >> s >> k) {
        sort(s.begin(), s.end());
        comb("", 0);
    }
    return 0;
}