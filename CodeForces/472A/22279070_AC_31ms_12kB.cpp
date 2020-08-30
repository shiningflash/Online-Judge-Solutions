#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000005

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int x = (n & 1 ? 9 : 4);
    cout << x << " " << (n - x) << "\n";
    return 0;
}