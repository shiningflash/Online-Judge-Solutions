#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in", "r", stdin);
    char s[12];
    for (int i = 0; i < 3; i++) {
        scanf("%s", s);
        for (int k = 0; k < 10; k++) {
            if (s[k] == '=') {
                for (int j = k+1; j < 10; j++) {
                    if (s[j] != '.') {
                        printf("%c\n", s[j]);
                        return 0;
                    }
                }
            }
        }
    }
    printf("You shall pass!!!\n");
}
