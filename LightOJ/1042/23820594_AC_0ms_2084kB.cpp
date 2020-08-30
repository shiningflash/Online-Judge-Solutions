// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;

inline string toBinary(int n) {
    string bin = "";
    while (n != 0) {
        bin = (n % 2 == 0 ? "0" : "1") + bin;
        n /= 2;
    }
    return ("0" + bin);
}

inline void toDecimal(string s) {
    int n = 1, ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') ans += n;
        n *= 2;
    }
    cout << ans << endl;
}

int main() {
    //freopen("in", "r", stdin);

    int n, x, cas(0);
    for (cin >> n; n--; ) {
        cin >> x;
        string s = toBinary(x);
        //cout << s << endl;
        next_permutation(s.begin(), s.end());
        //cout << s << endl;
        reverse(s.begin(), s.end());
        cout << "Case " << ++cas << ": ";
        toDecimal(s);
    }
}