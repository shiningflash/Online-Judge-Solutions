#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main() {
    //freopen("in", "r", stdin);
    int t, n;
    char ch;
    ordered_set s;
    for (cin >> t; t--; ) {
        cin >> ch >> n;
        if (ch == 'I') s.insert(n);
        else if (ch == 'D') s.erase(n);
        else if (ch == 'C') cout << s.order_of_key(n) << "\n";
        else if (ch == 'K') {
            if (n > s.size()) cout << "invalid\n";
            else cout << *s.find_by_order(n-1) << "\n";
        }
    }
    return 0;
}