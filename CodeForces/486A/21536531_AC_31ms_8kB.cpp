#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    scanf("%lld", &n);
    printf("%lld\n", (n & 1) ? -(n+1)/2 : n/2);
}