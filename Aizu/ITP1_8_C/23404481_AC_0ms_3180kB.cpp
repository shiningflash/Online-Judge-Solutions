// @author :: Amirul Islam 

#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int mx = 1e5;
const double pi = acos(-1.0);

int main() {
    // freopen("in", "r", stdin);
    
    string s;
    map <char, int> m;
    while (cin >> s) {
        for (int i = 0; i < s.size(); i++) {
            char ch = tolower(s[i]);
            m[ch]++;
        }
    }
    for (char i = 'a'; i <= 'z'; i++) {
        cout << (char) i << " : " << m[i] << endl;
    }
}