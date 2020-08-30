#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, tot(0);
    cin >> n;
    for (int i = 0; i <= n; i++) {
        int tmp = i, cnt = 0;
        for (int j = 2; j <= tmp; j++) {
            if (tmp % j == 0) {
                cnt++;
                while (tmp % j == 0) tmp /= j;
            }
        }
        if (cnt == 2) tot++;
    }
    cout << tot << "\n";
    return 0;
}