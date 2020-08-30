#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 1; i < n; i++) {
        if (s[i-1] > s[i]) {
            puts("YES");
            printf("%d %d\n", i, i+1);
            return 0;
        }
    }
    puts("NO");
}