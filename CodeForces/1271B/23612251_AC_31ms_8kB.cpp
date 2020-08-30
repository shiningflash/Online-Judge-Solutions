#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
 
int main() {
    // freopen("in.txt", "r", stdin);
 
    int n, b = 0, w = 0;
    cin >> n;
    string s;
    cin >> s;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') b++;
        if (s[i] == 'W') w++;
    }
    if (b % 2 == 1 && w % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }
    if (b == 0 || w == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector <int> v;
    int k = 0;
    if (b % 2 == 0) {
        for (int i = 0; i < n-1; i++) {
            if (s[i] == 'B') {
                k++;
                if (s[i+1] == 'B') {
                    v.push_back(i+1);
                    s[i] = 'W';
                    s[i+1] = 'W';
                    i++;
                }
                else {
                    v.push_back(i+1);
                    s[i] = 'W';
                    s[i+1] = 'B';
                }
            }
        }
    }
    else {
        for (int i = 0; i < n-1; i++) {
            if (s[i] == 'W') {
                k++;
                if (s[i+1] == 'W') {
                    v.push_back(i+1);
                    s[i] = 'B';
                    s[i+1] = 'B';
                    i++;
                }
                else {
                    v.push_back(i+1);
                    s[i] = 'B';
                    s[i+1] = 'W';
                }
            }
        }
    }
    cout << k << endl;
    for (int i = 0; i < k; i++) cout << v[i] << " ";
 
    return 0;
}