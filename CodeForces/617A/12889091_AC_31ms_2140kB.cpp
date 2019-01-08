#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
    cin >> n;
    if(n % 5 == 0) printf("%d\n", n/5);
    else printf("%d\n", (n/5)+1);
    return 0;
}