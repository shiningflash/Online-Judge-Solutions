#include <bits/stdc++.h>
using namespace std;
#define pii pair <int, int>
 
int main() {
    //freopen("in", "r", stdin);
    int t, n, m;
    vector <int> v;
    cin >> t;
    while (t--) {
        v.clear();
        bool f = false;
        cin >> n;
        while (n--) {
            cin >> m;
            if (m == 2048) f = true;
            if (m < 2048) v.push_back(m);
        }
        int sz = v.size();
        if (f) {
            cout << "YES\n";
            //cout << "-----------" << endl;
        }
        else {
            bool f = false;
            sort(v.begin(), v.end());
            int sum = 0;
            for (int i = sz-1; i >= 0; i--) {
                //cout << v[i] << endl;
                sum += v[i];
                if (sum == 2048) {
                    f = true;
                }
                //if (sum > 2048) sum -= v[i];
            }
            if (f) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}