#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[5005];
    scanf("%s", s);
    int x(0), y(0), z(0);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'a') x++, z++;
        else y++;
        z = max(y = max(x, y), z);
    }
    printf("%d\n", z);
}