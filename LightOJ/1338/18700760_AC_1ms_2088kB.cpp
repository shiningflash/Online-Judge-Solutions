#include <bits/stdc++.h>
using namespace std;

int tst, t = 1;
string a, b;

int main() {
    // freopen("in", "r", stdin);
    for (scanf("%d", &tst), getchar(); tst--; ) {
        int c = 0, d = 0;
        getline(cin, a);
        getline(cin, b);
        int l1 = a.length(), l2 = b.length();
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        for (int i = 0; i < l1; i++) if (a[i] != ' ') c += a[i];
        for (int i = 0; i < l2; i++) if (b[i] != ' ') d += b[i];
        cout << "Case " << t++ << ": " << ((c == d) ? "Yes\n" : "No\n");
    }
}
