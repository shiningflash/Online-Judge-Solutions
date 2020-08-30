/*
   Digits of Factorial LightOJ - 1045 
   Amirul Islam, Mar 12, 2019
*/ 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int mx = 1e6;
double logn[mx+5];
int tst, t = 1, n, b;

void init() { // dp here
    logn[0] = 0;
    for (int i = 1; i <= mx; i++)
        logn[i] = logn[i-1] + log(i);
}

int main() {
    init();
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d", &n, &b);
        ll digit = logn[n] / log(b) + 1;
        printf("Case %d: %lld\n", t++, digit);
    }
    return 0;
}