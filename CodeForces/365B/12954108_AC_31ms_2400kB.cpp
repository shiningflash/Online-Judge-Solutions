#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    int arr[100005];
    for (int  i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
    int a = 2, b = 2;
    if (t == 1) a = 1;
    for (int i = 2; i < t; i++) {
        if ((arr[i-1] + arr[i-2]) == arr[i]) {
            b++;
        }
        else {
            b = 2;
        }
        a = max(a, b);
    }
    printf("%d\n", a);
}
