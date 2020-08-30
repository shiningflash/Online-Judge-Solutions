// @author: Amirul Islam

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PB push_back
#define FILE(in) freopen("in", "r", stdin)

const int mx = 1e5+5;

void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int a[mx], b[mx];

void init() {
    a[0] = a[1] = 1;
    
    for (int i = 2; i <= 1000; i++)
        for (int j = i; j <= 1000; j += i) 
            a[j]++;
    
    b[1] = 1;

    for (int i = 1, ind = 1; i <= 100; i++)
        for (int j = 1000; j >= 2; j--)
            if (a[j] == i) b[++ind] = j;
}

int main() {
    // FILE();
    FASTIO();

    int cas(0), n, m;
    init();
    for (cin >> n; n--; ) {
        cin >> m;
        cout << "Case " << ++cas << ": " << b[m] << endl;
    }

    return 0;
}