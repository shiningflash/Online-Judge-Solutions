// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define PB push_back

const int mx = 1e5+5;

bool cmp(char a, char b) {
    if (tolower(a) == tolower(b)) return a < b;
    else return tolower(a) < tolower(b);
}

int main() {
    int n, m, t;
    string s;
    for (cin >> t; t--; ) {
        cin >> s;
        sort(s.begin(), s.end(), cmp);
        do {
            cout << s << endl;
        } while (next_permutation(s.begin(), s.end(), cmp));
    }
    return 0;
}