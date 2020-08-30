#include <bits/stdc++.h>
using namespace std;

int main() {
    int t(0), tst, n;
    string s;
    for (cin >> tst; tst--; ) {
        int cnt = 0;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            if (s[i] == '.') i += 2, cnt++;
        printf("Case %d: %d\n", ++t, cnt);
    }
}