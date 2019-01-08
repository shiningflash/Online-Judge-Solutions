// B - Team
// Amirul Islam

// Language: C++
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int contest, num = 0, a, b, c;
    cin >> contest;
    for (int i = 0; i < contest; i++) {
        cin >> a >> b >> c;
        ll n = a + b + c;
        if (n >= 2) num++;
    }
    cout << num << endl;
    return 0;
}