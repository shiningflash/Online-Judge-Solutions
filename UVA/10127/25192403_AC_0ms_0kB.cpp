// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e3;

int sol(int n) {
    int cnt = 1, tmp = 1;
    while (tmp % n) {
        tmp = tmp * 10 + 1;
        tmp %= n;
        cnt++;
    }
    return cnt;
}

int main() {
    int n;
    while (cin >> n) {
        cout << sol(n) << endl;
    }
    return 0;
}