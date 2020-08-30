#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, cnt = 0, len;
    string a, b;
    for (scanf("%d", &t); t--; ) {
        cin >> a >> b;
        cnt = 0;len = a.length();
        for (int i = 0; i < b.length(); i++) {
            if (i+1-len >= 0 && (b.substr((i+1-len), len)) == a) {
                b.erase(i+1-len, len);
                i -= len;
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}

