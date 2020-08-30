// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e3;

int a[mx+5];

void init() {
    for (int i = 1; i <= mx; i++) {
        int tmp = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) tmp += j;
        }
        if (tmp <= mx) a[tmp] = i;
    }
}

int main() {
    init();
    int n, t(0);
    while (cin >> n && n) {
        cout << "Case " << ++t << ": " << (a[n] ? a[n] : -1) << endl;
    }
    return 0;
}