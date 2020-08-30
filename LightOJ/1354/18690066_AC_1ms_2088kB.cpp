#include <bits/stdc++.h>
using namespace std;

string ip;
int _binary[100];
char ch;
int idx, rem;

void simulate(int x, int idx) {
    while (x) {
        rem = x % 2;
        _binary[idx--] = rem;
        x /= 2;
    }
}

void init() {
    idx = 35;
    for (int i = 0; i < 35; _binary[i] = 0, i++);
}

bool check() {
    bool flg = true;
        
    for (int j = 0; j < 8; j++) {
        if (_binary[j] != ip[j]-'0') {
            flg = false; break;
        }
    }
    for (int j = 9; j < 17; j++) {
        if (_binary[j] != ip[j]-'0') {
            flg = false; break;
        }
    }
    for (int j = 18; j < 26; j++) {
        if (_binary[j] != ip[j]-'0') {
            flg = false; break;
        }
    }
    for (int j = 27; j < 35; j++) {
        if (_binary[j] != ip[j]-'0') {
            flg = false; break;
        }
    }
    return flg;
}

int main() {
    // freopen("in", "r", stdin);
    int tst, t = 1, a, b, c, d, i, j;
    for (scanf("%d", &tst); tst--; ) {
        init();
        scanf("%d%c%d%c%d%c%d", &a, &ch, &b, &ch, &c, &ch, &d);
        
        simulate(d, 34);
        simulate(c, 25);
        simulate(b, 16);
        simulate(a, 7);

        cin >> ip;

        cout << "Case " << t++ << ": " << ((check()) ? "Yes\n" : "No\n");
    }
}