#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    string s;
    ll sum;
    while(t--) {
        sum = 0;
        cin >> s;
        int len = s.length();
        for (int i = 0; i < len; i++) {
            sum += (int) s[i] - 48;
        }
        cout << sum << endl;
    }
    return 0;
}
