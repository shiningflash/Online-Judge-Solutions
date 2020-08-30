// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define PB push_back
#define MP make_pair
#define FILEREAD() freopen("in", "r", stdin);
#define YES() cout << "YES" << endl
#define NO() cout << "NO" << endl;
 
const int _mx = 1e6+5;
 
void FASTIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int tree[3*_mx];
char s[_mx], ch;

void update(int node, int b, int e, int i, int j) {
    if (i > e || j < b) return;
    if (i <= b && j >= e) {
        tree[node]++;
        return;
    }
    int left = node << 1;
    int right = left | 1;
    int mid = (b + e) >> 1;
    update(left, b, mid, i, j);
    update(right, mid+1, e, i, j);
}

int query(int node, int b, int e, int pos) {
    if (pos > e || pos < b) return 0;
    if (pos == b && pos == e) return tree[node];
    int left = node << 1;
    int right = left | 1;
    int mid = (b + e) >> 1;
    if (pos <= mid) return tree[node] + query(left, b, mid, pos);
    else return tree[node] + query(right, mid+1, e, pos);
}

void solve() {
    int n, q, ans, pos, c, u, v;
    scanf("%s\n", s);
    n = strlen(s);
    memset(tree, 0, sizeof(tree));
    for (scanf("%d", &q); q--; ) {
        getchar();
        scanf("%c", &ch);
        if (ch == 'I') {
            scanf("%d %d", &u, &v);
            update(1, 1, n, u, v);
        }
        else {
            scanf("%d", &u);
            c = query(1, 1, n, u);
            ans = s[u-1] - '0';
            if (c & 1) ans = ans ^ 1;
            printf("%d\n", ans);
        }
    }
}

int main() {
    //FILEREAD();
    //FASTIO();

    int q, co(0);
    for (scanf("%d\n", &q); q--; ) printf("Case %d:\n", ++co), solve();
    return 0;
}