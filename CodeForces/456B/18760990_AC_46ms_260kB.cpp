#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair

int main() {
    //freopen("in", "r", stdin);
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
        ans = ((s[i] - '0') + (ans * 10)) % 4;
    ans = (int) (1 + pow(2, ans) + pow(3, ans) + pow(4, ans)) % 5;
    cout << ans << "\n";
}