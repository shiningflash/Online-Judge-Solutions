#include<bits/stdc++.h>
using namespace std;

int main () {
    int t, n, k, a[100];
    cin >> t;
    while (t--) {
        int sum = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += (a[i] / k);
        }
        cout << sum << endl;
    }
}