#include <stdio.h>

int main()
{

    long long n, m, sum = 0;
    int i, k = 1;
    scanf("%lld %lld", &n, &m);
    int a[n];
    for (i = 1; i <= n; i++) {
    	scanf("%d", &a[i]);
    }
    long long max = 0;

    for (i = 1; i <= n; i++) {
        sum += a[i];
        while (sum > m) {
            sum = sum - a[k++];
            if (max <= sum && m >= sum) {
                max = sum;
                break;
            }
        }
        if (max <= sum && m >= sum) {
            max = sum;
        }
    }
    printf("%lld\n", max);

    return 0;
}
