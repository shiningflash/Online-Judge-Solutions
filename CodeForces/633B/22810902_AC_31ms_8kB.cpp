/*
	@author     : Amirul Islam
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 1e6;

int cnt = 0;

int trailingZero(int x) {
    while (x % 5 == 0 && x > 0) {
        cnt++;
        x /= 5;
    }
    return cnt;
}

int main() {
    // freopen("in", "r", stdin);
    int n;
    cin >> n;

    vector <int> v;
    for (int i = 1; i <= mx; i++) {
        if (trailingZero(i) == n) v.push_back(i);
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}