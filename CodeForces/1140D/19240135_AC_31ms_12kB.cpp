#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, aa(0);
    cin >> n;
    for (int i = 2; i < n; aa += i * (i+1), i++);
    printf("%d\n", aa);
}