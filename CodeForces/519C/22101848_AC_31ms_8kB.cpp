#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << min((a + b) / 3, min(a, b)) << endl;
    return 0;
}