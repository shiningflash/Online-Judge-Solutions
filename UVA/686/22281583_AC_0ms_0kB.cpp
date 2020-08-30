#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1000005

bool isPrime(int n) {
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) if (n % i == 0) return false;
    return true;
}

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    
    int n;
    while (scanf("%d", &n) && n) {
        int cnt(0);
        if (n == 4) puts("1");
        else {
            for (int i = 3; i <= n/2; i++) {
                if (isPrime(i) && isPrime(n-i)) cnt++; 
            }
            printf("%d\n", cnt);
        }
    }
    return 0;
}