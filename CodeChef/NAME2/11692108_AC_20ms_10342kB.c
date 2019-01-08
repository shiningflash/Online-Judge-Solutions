#include<stdio.h>
#include<string.h>
 
int main() {
    char m[25005], w[25005];
    int i, j, k, t, s1, s2, flag;
    scanf("%d", &t);
    while(t--)
    {
              scanf("%s%s", m, w);
              flag = 0;
              s1 = strlen(m);
              s2 = strlen(w);
              if(s1 < s2)
              {
                   for(i=0,j=0; i<s1 && j <s2; )
                   {
                                    if(m[i] == w[j])
                                    {
                                           ++i; 
                                    }
                                    ++j;
                   }
                   if(i==s1)
                     flag = 1;    
              }
              else
              {
                 for(i=0,j=0; i<s1 && j <s2; )
                   {
                                    if(w[j] == m[i])
                                    {
                                           ++j; 
                                    }
                                    ++i;
                   } 
                   if(j==s2) {
                      flag = 1; 
                   }
              }
              if(flag == 1) {
                 printf("YES\n");
              }
              else {
                 printf("NO\n"); 
              }
    }
    return 0;
}
