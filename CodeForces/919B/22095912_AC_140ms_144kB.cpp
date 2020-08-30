#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int digitSum(int n) {
    int res = 0;
    while (n) res += n % 10, n /= 10;
    return res;
}
 
int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> v;
    for (int i = 19; v.size() < n; i++) if (digitSum(i) == 10) v.push_back(i);
    cout << v.back() << endl;
    return 0;
}