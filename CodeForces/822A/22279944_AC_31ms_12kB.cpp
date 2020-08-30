#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000005

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int a, b, sum(1);
    cin >> a >> b;
    for (int i = 2; i <= min(a, b); i++) sum *= i;
    cout << sum << endl;
    return 0;
}