#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    int n, a[3];
    for (cin >> n; n--; ) {
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        cout << (a[0] + a[1] > a[2] ? "OK\n" : "Wrong!!\n");
    }
    return 0;
}
