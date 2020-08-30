#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100005

int main() {
    //freopen("in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    char s[mx];
    scanf("%s", s);
    int x(0), len = strlen(s);
    for (int i = 0; i < len; i++) {
        s[i] == 'A' ? x++ : x--;
        if (x < 0) {
            cout << "Nao\n";
            return 0;
        }
    }
    cout << (x ? "Nao\n" : "Sim\n");
    return 0;
}