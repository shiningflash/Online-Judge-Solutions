#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    //freopen("in", "r", stdin);
    int n, q, a, sum = 0;
    for (scanf("%d", &q); q--; ) {
        scanf("%d", &n);
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            sum += a;
        }
        if (sum % n == 0) cout << (sum / n) << endl;
        else  cout << (sum / n) + 1 << endl;
    }
}