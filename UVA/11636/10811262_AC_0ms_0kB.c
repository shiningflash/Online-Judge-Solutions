#include <stdio.h>
#include <math.h>

int main()
{
    int X=0, Y, N, k, i;
    while (scanf("%d", &N) >= 0) {
        X++;
        for (Y=0; Y<=14; Y++) {
            if (N<=pow(2, Y) && N>pow(2, Y-1)) {
                printf("Case %d: %d\n", X, Y);
            }
        }
    }

    return 0;
}
