/**
 * @problem Triangle Wave - UVA 488
 * @author  Amirul Islam (shiningflash)
 */

#include<cstdio>
#include<iomanip>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<sstream>
#include<stack>
#include<list>
#include<iostream>
#include<assert.h>

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

/**Define function and object**/
#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define sqr(x) ((x)*(x))

/**Define constant value**/
#define le 1000001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long lld;

using namespace std;

/**********************End*******************/

int main() {
    int t, height, amplitude;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &height, &amplitude);
        for (int j = 1; j <= amplitude; j++) {
            for (int k = 1; k <= height; k++) {
                for (int l = 1; l <= k; l++) printf("%d", k);
                printf("\n");
            }
            for (int k = height - 1; k >= 1; k--) {
                for (int l = 1; l <= k; l++) printf("%d", k);
                printf("\n");
            }
            if (j != amplitude) printf("\n");
        }
        if (t) printf("\n");
    }
    return 0;
}
