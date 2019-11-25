// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e4;
int cas(0), t, n, h1, h2, m1, m2;
int a[mx];
char ch;

int main(){
   // freopen("in", "r", stdin);

    for (cin >> t; t--; ) {
        memset(a, 0, sizeof(a));
        for (cin >> n; n--; ) {
            cin >> h1 >> ch >> m1 >> h2 >> ch >> m2;
            int time1 = h1 * 60 + m1;
            int time2 = h2 * 60 + m2;
            if (time1 < time2) {
                for (int i = time1; i < time2; i++) a[i]++;
            }
            else {
                for (int i = time1; i <= 24*60; i++) a[i]++;
                for (int i = 0; i < time2; i++) a[i]++;
            }
        }
        int _mx = 0;
        for (int i = 0; i <= 24*60; i++) _mx = max(_mx, a[i]);
        cout << "Case #" << (++cas) << ": Mr.Xifu needs " << _mx << " classroom(s)\n";
    }

}
