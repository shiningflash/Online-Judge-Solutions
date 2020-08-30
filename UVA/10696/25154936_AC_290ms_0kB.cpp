// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define PB push_back

const int mx = 1e5+5;

int f91(int n) {
    if (n >= 101) return n - 10;
    else return f91(f91(n+11));
}

int main() {
    int n;
    while (cin >> n && n) {
        cout << "f91(" << n << ") = " << f91(n) << endl;
    }    
    return 0;
}