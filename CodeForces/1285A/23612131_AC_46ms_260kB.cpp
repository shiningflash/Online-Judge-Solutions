// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
#define PII pair <int, int>
#define MP make_pair
#define PB push_back
 
const int le = 1e5+5;
const int INF = INT_MAX;
 
int main() {
    // freopen("in", "r", stdin);
    int n;
    string s;
    cin >> n;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') a++;
        else b++;
    }
    cout << (a+b+1) << endl;
}
