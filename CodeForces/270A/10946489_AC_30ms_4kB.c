#include <stdio.h>
#include <math.h>

int main()
{
    int i, t, a, b;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a);
        b = 180 - a;
        if (360 % b == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
