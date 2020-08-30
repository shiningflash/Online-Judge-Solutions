#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100005
 
bool sol(int n) {
    int a[10];
    memset(a, 0, sizeof(a));
    while (n) {
        int x = n % 10;
        n /= 10;
        if (a[x] > 0) return false;
        a[x]++;
    }
    return true;
}
 
int main() {
    //freopen("in", "r", stdin);
    int a, b, ans = -1;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (sol(i)) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
 
    return 0;
}
