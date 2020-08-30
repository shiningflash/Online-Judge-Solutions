#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
const int mx = 1e5+5;

int main() {
    int n, x, sum = 0;
    for (cin >> n; n--; ) {
        cin >> x;
        sum += x;
    }
    cout << (sum ? "HARD\n" : "EASY\n");
}