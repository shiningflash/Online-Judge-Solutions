#include <bits/stdc++.h>
using namespace std;
#define mx 1005
#define pr pair<int, int>

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int n, m, t;
    cin >> t;
    string s;
    getchar();
    getchar();
    while (t--) {
        int sum = 0;
        map<string, int> mp;
        while (getline(cin, s) && s.size()) sum++, mp[s]++;
        for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
            double zz = (it->second * 100.0) / sum;
            cout << it->first << " " << fixed << setprecision(4) << zz << "\n";
        }
        if (t) cout << "\n";
    }
    return 0;
}
