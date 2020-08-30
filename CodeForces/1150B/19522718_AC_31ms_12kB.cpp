#include <bits/stdc++.h>
using namespace std;

int n, cnt(0);
char a[60][60];

bool check(int x, int y) {
    if (a[x-1][y] == '.' && a[x][y-1] == '.' && a[x+1][y] == '.' && a[x][y+1] == '.') {
        a[x][y] = '#';
        a[x-1][y] = '#';
        a[x][y-1] = '#';
        a[x+1][y] = '#';
        a[x][y+1] = '#';
        cnt -= 5;
        return true;
    }
    return false;
}

void printt() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (char) a[i][j];
        }
        cout << "\n";
    }
}

int main() {
//    freopen("in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == '.') cnt++;
        }
    }
//    printt();
    bool flag = true;
    for (int i = 0; i < n-1; i++) {
        for (int j = 1; j < n-1; j++) {

            if (a[i][j] == '.') {
                if (!check(i+1, j)) {
                    flag = false;
                    break;
                }
            }
        }
    }
//    printt();
//    cout << flag << " " << cnt << endl;
    if (flag == true && cnt == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}