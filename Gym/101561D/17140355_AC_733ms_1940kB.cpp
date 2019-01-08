#include <cstdio>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include <stack>
#include <list>
#include <iostream>
#include <assert.h>

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

/**Define function and object**/
#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

/**Define constant value**/
#define le 46340
#define sz 4792
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;

using namespace std;

/**********************End*******************/

int main() {
    int n, k;

    while(1) {
        scanf("%d %d", &n, &k);
        if (n == -1 && k == -1) break;

        int arr[n+2];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        _sort(arr, n);

        ll low = 1, high = arr[n-1], mid, cnt = 0;

        while(low < high) {
            mid = low + (high - low) / 2;
            cnt = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] > mid) {
                    cnt += (arr[i] / mid);
                    if (arr[i] % mid > 0) cnt++;
                }
                else cnt++;
            }
            if (cnt <= k) high = mid;
            else low = mid+1;
        }
        cout << low << endl;
    }
    return 0;
}