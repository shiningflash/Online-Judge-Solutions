#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, k;

    while(1) {
        scanf("%d %d", &n, &k);
        if (n == -1 && k == -1) break;

        int arr[n+2];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        sort(arr, arr + n);

        ll low = 1, high = arr[n-1], mid, cnt = 0;

        while(low < high) {
            mid = low + (high - low) / 2;
            cnt = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] > mid) {
                    cnt += (arr[i] / mid);
                    if (arr[i] % mid > 0) cnt++;
                }
                else cnt++;
            }
            if (cnt <= k) high = mid;
            else low = mid+1;
        }
        cout << low << endl;
    }
    return 0;
}
