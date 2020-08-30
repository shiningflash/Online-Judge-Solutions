#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, aa(0);
    scanf("%lld", &n);
    for (int i = 2; i < n; aa += i * (i+1), i++);
    printf("%lld\n", aa);
}