#include <bits/stdc++.h>
using namespace std;

unordered_set <string> st;
string s, ss = "";

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt(0);
    cin >> n;
    while (n--) {
        cin >> s;
        if (s.size() < 4) continue;
        if (st.count(s)) cnt++, ss += s + '\n';
        st.insert(s);
    }
    if (ss.empty()) cout << "SAFO\n";
    else cout << cnt << "\n" << ss;
    return 0;
}
