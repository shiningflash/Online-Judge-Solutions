#include <bits/stdc++.h>
using namespace std;
#define ll long long int

double w[172][172], a[172][172], b[172][172];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> w[i][j];
            if (i == j) {
                a[i][j] = w[i][j];
                b[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = .5 * (w[i][j] - w[j][i]);
            b[j][i] = -b[i][j];
            a[i][j] = a[j][i] = w[i][j] - b[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lf", a[i][j]);
            cout << ((j < n-1) ? " " : "\n");
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lf", b[i][j]);
            cout << ((j < n-1) ? " " : "\n");
        }
    }
}