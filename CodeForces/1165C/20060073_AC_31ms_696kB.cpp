#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, len, cnt(0);
    char s[200000];
    string mm = "";
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n-1; i++) {
        if (s[i] != s[i+1]) {
            mm += s[i];
            mm += s[i+1];
            i++;
        }
        else {
            for (int k = i, j = i+1; j < n; j++) {
                if (s[k] != s[j]) {
                    mm += s[k];
                    mm += s[j];
                    i++;
                    break;
                }
                i++;
            }
        }
    }
    len = mm.size();
    if (len == 0) cout << n << endl;
    else if (len == n) cout << "0" << endl;
    else cout << (n - mm.size()) << endl;
    cout << mm << endl;
    return 0;
}