#include <bits/stdc++.h>
using namespace std;

const int le = 1e5+5;
int a[le];
vector <int> v;

int main() {
    //freopen("in.txt", "r", stdin);
    for (int i = 0; i < 10; i++) cin >> a[i];
    sort(a, a+10);
    cout << a[9] << "\n" << a[8] << "\n" << a[7] << "\n";

    return 0;
}
