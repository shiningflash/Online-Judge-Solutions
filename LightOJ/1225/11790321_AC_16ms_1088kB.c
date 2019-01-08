    #include <stdio.h>
    #include <math.h>
     
    int main () {
        int i, t;
        unsigned long long int j, temp, s, rem;
        scanf("%d\n", &t);
        for (i = 1; i <= t; i++) {
            scanf("%lld", &j);
            temp = j; s = 0;
            while (temp > 0) {
                rem = temp % 10;
                temp /= 10;
                s = s * 10 + rem;
            }
            printf("Case %d: ", i);
            if (s == j) {
                printf("Yes\n");
            }
            else {
                printf("No\n");
            }
        }
        return 0;
    }
     
