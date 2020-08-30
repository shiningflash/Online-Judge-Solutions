#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair <int, int>
 
int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    
    int t, n, m;
    string s;
    cin >> t;
    while (t--) {
        int R, P, S, rr = 0, pp = 0, ss = 0;
        cin >> n >> R >> P >> S;
        cin >> s;
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (s[i] == 'R') rr++;
            else if (s[i] == 'P') pp++;
            else if (s[i] == 'S') ss++;
        }
        int sum = 0;
        sum += min(R, ss);
        sum += min(P, rr);
        sum += min(S, pp);
        //cout << s << endl;
        //cout << sum << endl;
        int zz = ((n+1)/2);
        //cout << sum << " " << zz << endl;
        if (sum < zz) cout << "NO\n";
        else {
            string ans = "";
            for (int i = 0; i < len; i++) {
                if (s[i] == 'R') {
                    rr--;
                    if (P > 0) ans += 'P', P--;
                    else {
                        if (R > ss && R > 0) ans += 'R', R--;
                        else if (S > 0) ans += 'S', S--;
                        else ans += 'R', R--;
                    }
                }
                else if (s[i] == 'P') {
                    pp--;
                    if (S > 0) ans += 'S', S--;
                    else {
                        if (P > rr && P > 0) ans += 'P', P--;
                        else if (R > 0) ans += 'R', R--;
                        else ans += 'P', P--;
                    }
                }
                else if (s[i] == 'S') {
                    ss--;
                    if (R > 0) ans += 'R', R--;
                    else {
                        if (S > pp && S > 0) ans += 'S', S--;
                        else if (P > 0) ans += 'P', P--;
                        else ans += 'S', S--;
                    }
                }
            }
            cout << "YES\n";
            cout << ans << endl;
        }
    }
    
    return 0;
}