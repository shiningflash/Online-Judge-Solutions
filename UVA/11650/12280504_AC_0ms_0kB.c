#include <stdio.h>

int main(void) {
  int i, t, hour, minit;
  scanf("%d", &t);

  for (i=0; i<t;i++) {
    scanf("%d:%d", &hour, &minit);
    if(minit!=0) {
      minit=60-minit;
    }
    hour=(minit==0)+(11-hour);
    if(hour<=0) {
      hour+=12;
    }
    printf("%02d:%02d\n",hour,minit);
  }
  return 0;
}