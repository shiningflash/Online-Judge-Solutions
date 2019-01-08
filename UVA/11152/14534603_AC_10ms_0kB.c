#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    double p, t, s, r1, r2, rose;
    double pi = 3.1415926535897;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        p = (a + b + c) / 2.0;
        t = sqrt(p*(p-a)*(p-b)*(p-c));
        r1 = t / p;
        rose = pi * r1 * r1;
        r2 = (a*b*c)/sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
        s = (pi*r2*r2);
        printf("%.4lf %.4lf %.4lf\n", s - t, t - rose, rose);
    }

    return 0;
}