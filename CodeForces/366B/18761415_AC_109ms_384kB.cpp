#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair

int main() {
    //freopen("in", "r", stdin);
    int t, n, q, m, k, idx, sum, minim;
    cin >> k >> t;
    int a[k+1];
    for (int i = 1; i <= k; cin >> a[i], i++);
    for (int i = 1; i <= t; i++) {
        sum = 0;
        for (int j = i; j <= k; sum += a[j], j += t);
        if (i == 1) {
            minim = sum;
            idx = i;
        }
        else {
            if (sum < minim) {
                minim = sum;
                idx = i;
            }
        }
        //cout << m  << " " << sum << endl;
    }
    cout << idx << "\n";
}