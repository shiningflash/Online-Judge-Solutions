#include <bits//stdc++.h>
using namespace std;

char name[105][105];  
char song[16][16] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};  
  
int main() {  
    int n, i, j, k;  
    while(~scanf("%d",&n)) {  
        for(i = 0; i < n; scanf("%s",name[i]), i++);  
        k = n / 16; if (n % 16) k++;  
        for(i = 0; i < 16 * k; printf("%s: %s\n", name[i%n], song[i%16]), i++);  
    }
    return 0;  
} 