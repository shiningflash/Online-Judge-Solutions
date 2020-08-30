#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, a, b, ans(0);
    cin >> n >> a >> b;
    cout << min(n-a, b+1) << "\n";
    return 0;
}