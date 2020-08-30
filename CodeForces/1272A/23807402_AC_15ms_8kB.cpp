// @author: Amirul Islam
 
#include <bits/stdc++.h>
using namespace std;
#define LLI unsigned long long
#define PII pair <int, int>
#define PB push_back
 
const int len = 1e5+5;
const int PI = acos(-1.0);
 
int main() {
   // freopen("in", "r", stdin);
   int n, q, a[3];
   for (cin >> n; n--; ) {
       cin >> a[0] >> a[1] >> a[2];
       sort(a, a+3);
       //cout << a[0] << " " << a[1] << " " << a[2] << endl;
       if (a[0] != a[1]) {
            a[0]++;
            if (a[0] != a[1]) a[1]--;
            if (a[0] != a[2]) a[2]--;
       }
       else {
           if (a[1] != a[2]) {
               a[0]++;
               a[1]++;
               if (a[1] != a[2]) a[2]--;
           }
       }
       //cout << a[0] << " " << a[1] << " " << a[2] << endl;
       cout << (abs(a[0] - a[1]) + abs(a[1] - a[2]) + abs(a[2] - a[0])) << endl;
    }
}