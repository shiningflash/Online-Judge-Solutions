#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100], b[100];
    int n, k;
    cin >> n;
    for (int j = 0; j < n; j++) {
        cin >> k;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++) {
            cin >> b[i];
        }
        sort (a, a+k);
        sort(b, b+k);
        for (int i = 0; i < k; i++) {
            sum += abs(b[i]-a[i]);
        }
        printf("Case %d: %d\n",j+1,sum);
    }
}