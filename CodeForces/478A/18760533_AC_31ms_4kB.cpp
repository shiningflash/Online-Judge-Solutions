#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair

int main() {
    //freopen("in", "r", stdin);
    int a, b, c, d, e, sum;
    cin >> a >> b >> c >> d >> e;
    sum = a + b + c + d + e;
    cout << (((sum == 0) ? -1 : ((sum % 5 == 0) ? (sum/5) : -1))) << "\n";
}