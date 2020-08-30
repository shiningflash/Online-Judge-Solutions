#include <bits/stdc++.h>
using namespace std;
#define mx 1005
#define pr pair<int, int>

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);

    int n, x;
    map<int, int> mp;
    queue<int> q;
    while (scanf("%d", &x) != EOF) {
        if (mp[x] == 0) q.push(x);
        mp[x]++;
    }
    map<int, int>::iterator it;
    while (!q.empty()) {
        x = q.front();
        q.pop();
        cout << x << " " << mp[x] << "\n";
    }
    return 0;
}
