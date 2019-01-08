#include <stdio.h>
int main() {
  int n, c, h = 0, rh = 0, f = 0, rf=0, t=0, rt=0, fi=0, rfi = 0, tw = 0, rtw=0, o=0, total;
  scanf("%d", &c);
  while(c--) {
    scanf("%d", &n);
    h = n / 100;
    rh = n % 100;
    f = rh / 50;
    rf = rh % 50;
    t = rf / 10;
    rt = rf % 10;
    fi = rt / 5;
    rfi = rt % 5;
    tw = rfi / 2;
    rtw = rfi % 2;
    o = rtw;
    total = h + f + t + fi + tw + o;
    printf("%d\n", total);
  }
  return 0;
}