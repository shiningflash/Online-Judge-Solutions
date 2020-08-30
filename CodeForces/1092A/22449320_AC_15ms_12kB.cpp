#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define le 100005
 
int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, k;
    for (cin >> t; t--; ) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) cout << (char) ('a' + (i % k));
        cout << endl;
    }
    return 0;
}