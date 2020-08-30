#include <bits/stdc++.h>
using namespace std;
 
int a[105][5005];
int zz = 5000;
 
int main() {
    //freopen("in", "r", stdin);
    //memset(a, 0, sizeof(a));
    int n, x, y, z;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 1; i <= n; i++) {
        //cout << s[i-1] << endl;
        if (s[i-1] == '0') continue;
        if (s[i-1] == '1') {
            for (int j = 0; j < zz; j++) a[i][j] = 1;
        }
    }
    /*for (int i = 1; i <= n; i++) {
        for (int j = 0; j <zz; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl << endl;
    }*/
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        int k = 1;
        for (int j = y, p = 0; j < zz; j++) {
            p++;
            if (k % 2 == 1) {
                if (a[i][j] == 0) a[i][j] = 1;
                else a[i][j] = 0;
            }
            if (p == x) p = 0, k++;
        }
    }
    /* for (int i = 1; i <= n; i++) {
        for (int j = 0; j < zz; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }*/
    int mn = 0;
    for (int i = 0; i < zz; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (a[j][i] == 1) cnt++;
        }
        mn = max(mn, cnt);
    }
    cout << mn << endl;
}