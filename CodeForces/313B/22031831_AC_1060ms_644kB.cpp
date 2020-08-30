#include <bits/stdc++.h>
using namespace std;
#define mx 100005

int a[mx];

void init() {
    string s;
    cin >> s;
    for (int i = 1; i < s.size(); i++) a[i] = (s[i] == s[i-1] ? a[i-1]+1 : a[i-1]);
}

int main() {
    //freopen("in", "r", stdin);
    int t, l, r;
    init();
    for (scanf("%d", &t); t--; ) {
        cin >> l >> r;
        cout << a[r-1] - a[l-1] << "\n";
    }    
}