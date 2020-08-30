#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int countLeapYear(int y) {
    return ((y / 4) + (y / 400) - (y / 100));
}

int main() {
    int cas(0), t, d1, d2, y1, y2;
    string m1, m2;
    char ch;
    for (cin >> t; t--; ) {
        cin >> m1 >> d1 >> ch >> y1;
        cin >> m2 >> d2 >> ch >> y2;
        if (!(m1 == "January" || m1 == "February")) y1++;
        if (m2 == "January" || (m2 == "February" && d2 < 29)) y2--;
        int ans = countLeapYear(y2) - countLeapYear(y1-1);
        cout << "Case " << ++cas << ": " << ans << endl;
    }
}
