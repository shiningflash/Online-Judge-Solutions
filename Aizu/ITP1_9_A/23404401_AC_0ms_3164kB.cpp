// @author :: Amirul Islam 

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e5;
const double pi = acos(-1.0);

string makeLower(string s) {
    for (int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
    return s;
}

int main() {
    // freopen("in", "r", stdin);
    
    string x, y;
    cin >> x;
    x = makeLower(x);
    int cnt = 0;
    while (cin >> y && y != "END_OF_TEXT") {
        y = makeLower(y);
        if (x == y) cnt++;
    }
    cout << cnt << endl;
}