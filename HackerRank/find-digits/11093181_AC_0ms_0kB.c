#include <stdio.h>
#include <math.h>

int main() {
    int t, T, r, temp, N, b;
    scanf("%d", &T);
    for(t = 0; t < T; t++){
        scanf("%d", &N);
        temp = N, b = 0;
        while(temp != 0){
            r = temp % 10;
            if(r != 0 && N%r == 0)
                b++;
            temp /= 10;
        }
        printf("%d\n", b);
    }
    return 0;
}