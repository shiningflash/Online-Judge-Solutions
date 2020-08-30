#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt(0);
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n-10; i++) {
        if (s[i] == '8') cnt++;
        else cnt--;
    }
    if (cnt > 0) puts("YES");
    else puts("NO");
}