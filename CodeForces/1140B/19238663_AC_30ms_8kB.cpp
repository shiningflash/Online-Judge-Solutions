#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int t, n, i, j, k;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        for (i = 0, j = n-1, k = 0; i < n && s[i++] != '>' && s[j--] != '<'; k++);
        cout << k << "\n";
    }
}