// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PB push_back

const int mx = 2e5+5;

void FILEREAD() {
    freopen("in.txt", "r", stdin);
}

void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    // FILEREAD();
    FASTIO();

    int n, k, ans = INT_MAX, x = 0, y = 0;
    string a, b;
    cin >> n >> k >> a >> b;
    for (int i = 0; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == '1') {
                sum1 = max(sum1, abs(j-i));
                sum2 = max(sum2, i+j+k+2);
            }
        }
        for (int j = 0; j < n; j++) {
            if (b[j] == '1') {
                sum2 = max(sum2, abs(j-i));
                sum1 = max(sum1, i+j+k+2);
            }
        }
        if (sum1 < ans) x = 2, y = i+1, ans = sum1;
        if (sum2 < ans) x = 1, y = i+1, ans = sum2;
    }
    cout << ans << endl << x << " " << y << endl;
    return 0;
}
