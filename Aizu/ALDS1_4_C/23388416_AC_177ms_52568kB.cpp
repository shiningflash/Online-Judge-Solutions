#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int _mx = 2e6;
int arr[_mx+5];

int main() {
    // freopen("in.txt", "r", stdin);

    int n;
    map <string, int> m;
    string a, b;
    for (cin >> n; n--; ) {
        cin >> a >> b;
        if (a[0] == 'i') m[b]++;
        else if (a[0] == 'f') cout << (m[b] ? "yes\n" : "no\n");
    }

    return 0;
}
