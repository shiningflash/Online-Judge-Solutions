#include <bits/stdc++.h><
using namespace std;

const int le = 1e5+5;
int a[le];
vector <int> v;

int main() {
    //freopen("in.txt", "r", stdin);
    int n, t = 0, x, l, r;
    while (cin >> n >> x && (n + x)) {
        v.clear();
        for (int i = 0; i < n; i++) cin >> l, v.push_back(l);
        printf("CASE# %d:\n", ++t);
        sort(v.begin(), v.end());
        while (x--) {
            cin >> r;
            int pos = lower_bound(v.begin(), v.end(), r) - v.begin();
            if (v[pos] == r) printf("%d found at %d\n", r, pos+1);
            else printf("%d not found\n", r);
        }
    }

    return 0;
}
