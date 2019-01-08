#include <stdio.h>
int main () {
    long n, t, i, sum = 0, start = 0, end = 0, newsum = 0, result = 0;;
    scanf("%ld %ld", &n, &t);
    int book[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &book[i]);
        sum += book[i];
    }
    while (end < n) {
        newsum = newsum + book[end++];
        while(newsum > t) {
            newsum -= book[start++];
        }
        if (result < (end - start)) {
            result = end - start;
        }
    }
    printf("%ld\n", result);
    return 0;
}
