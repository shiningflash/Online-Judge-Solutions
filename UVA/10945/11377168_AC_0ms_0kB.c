#include <stdio.h>
#include <string.h>

int main () {
     char s1[100000], s2[100000] ;
     int i, j, a, b, x ;

    while (gets(s1))
    {
         a = 0 ;
         x = strcmp (s1 , "DONE" ) ;
         if (x == 0) break ;

         for (i=0 , b=0 ;  i<strlen (s1) ;  i++) {
              if (s1[i] >= 'A' && s1[i] <= 'Z')
                   s1[i] = 97 + (s1[i] - 'A') ;

              if (s1[i] >='a' && s1[i] <= 'z' )
                   {
                        s2[b] = s1 [i] ;
                         b++ ;
                   }
         }

          for (i=0 ,j = b-1 ; i < j ; i++,j-- ) {
                if (s2[i] != s2[j])
               {
                    a = 1 ;
                    printf ("Uh oh..\n") ;
                    break ;
               }
            else a = 0 ;
          }
     if (a == 0) printf ("You won't be eaten!\n") ;
     }
     return 0 ;
}