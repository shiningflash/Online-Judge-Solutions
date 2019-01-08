// E - The New Year: Meeting Friends 
// Amirul Islam

// Language: C++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    sort(a, a+3);
    cnt = (a[1] - a[0]) + a[2] - a[1];
    cout << cnt << endl;
    return 0;
}