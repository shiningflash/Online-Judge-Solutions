#include <stdio.h>
#include <math.h>
int main ()
{
   long long i, T, rt, d, x, y, n;
   scanf("%lld", &T);
   for (i = 1; i <= T; i++) {
      scanf("%lld", &n);
      rt = sqrt (n);
      d = n - rt*rt;
      if (d == 0) {
         if (rt % 2 == 0) {
            y = 1;
            x = rt;
         }
         else {
            x = 1;
            y = rt;
         }
      }
      else if (d > rt) {
         if (rt % 2 == 0) {
            y = rt + 1;
            x = rt + 1 - (d - rt - 1);
         }
         else {
            y = rt + 1 - (d - rt - 1);
            x = rt + 1;
         }
      }
      else {
         if (rt % 2 == 0) {
            y = n - rt * rt;
            x = rt + 1;
         }
         else {
            y = rt + 1;
            x = n - rt * rt;
         }
      }
      printf("Case %lld: %lld %lld\n", i, x, y);
   }
   return 0;
}