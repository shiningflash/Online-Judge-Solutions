#include <stdio.h>
#include <string.h>

int main() {
	int i, n, l;
	char S[10000];
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
        scanf("%s", &S);
        l = strlen(S);
        if(S[l-1]=='5' && S[l-2]=='3') {
            printf("-\n");
        }
        else if(S[0]=='9' && S[l-1]=='4') {
            printf("*\n");
        }
        else if(S[0]=='1' && S[1]=='9' && S[2]=='0') {
            printf("?\n");
        }
        else {
            printf("+\n");
        }
	}

    return 0;
}
