#include <bits/stdc++.h>
using namespace std;

string s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main() {
    char c;
    while((c = getchar()) != EOF) {
        int i = 1;
        while (s[i] && s[i] != c) i++;
        cout << (s[i] ? s[i-1] : c);
    }
    return 0;
}
