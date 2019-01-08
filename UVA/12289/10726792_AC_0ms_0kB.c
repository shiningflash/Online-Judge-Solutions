#include<stdio.h>
#include<string.h>

int main()
{
    int n,l,i;
    char s[10];
    scanf("%d",&n);
        while(n--)
        {
            scanf("%s", &s);
            l=strlen(s);
            if(l==5)
               printf("3\n");
            else
            {
                if(s[0]=='o'&&s[1]=='n'||s[0]=='o'&&s[2]=='e'||s[1]=='n'&&s[2]=='e')
                   printf("1\n");
                else
                   printf("2\n");
            }
        }
    
    return 0;
}