#include<stdio.h>
#include<string.h>

int main() {
    int i, j, n, t;
    scanf("%d",&t);
    char a[120];
    getchar();

    for(i = 1; i <= t; i++) {
        gets(a);
        int num = 0;

        for(j = 0;j < strlen(a); j++) {
            if((a[j]=='a')||(a[j]=='d')||(a[j]=='g')||(a[j]=='j')||(a[j]=='m')||(a[j]=='p')||(a[j]=='t')||(a[j]=='w')||(a[j]==' '))
                num+=1;
            else if((a[j]=='b')||(a[j]=='e')||(a[j]=='h')||(a[j]=='k')||(a[j]=='n')||(a[j]=='q')||(a[j]=='u')||(a[j]=='x'))
                num+=2;
            else if((a[j]=='c')||(a[j]=='f')||(a[j]=='i')||(a[j]=='l')||(a[j]=='o')||(a[j]=='r')||(a[j]=='v')||(a[j]=='y'))
                num+=3;
            else if((a[j]=='s')||(a[j]=='z'))
                num+=4;
        }

        printf("Case #%d: %d\n",i,num);
    }
    return 0;
}
