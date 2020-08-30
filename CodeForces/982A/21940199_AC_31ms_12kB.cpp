#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n; string s;
    cin >> n >> s;
    bool f1 = true, f2 = true;;
    for (int i = 1; i < n; i++) {
        if (s[i] == '1' && s[i-1] == '1') {
            f1 = false;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if(i-1 >= 0 && s[i-1] == '1') continue;
            if(i+1 < n && s[i+1] == '1') continue;
            f2 = false;
            break;
        }
    }
    cout << ((f1 && f2) ? "Yes\n" : "No\n");
}