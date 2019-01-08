/*************************************
 * 0-1 Knapsack Problem II Aizu - DPL_1_F 
 * @author Amirul Islam (shiningflash)
 ************************************/

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
#define le 10000
#define inf 1000000005
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef unsigned long long ll;

using namespace std;

/**********************End*******************/

int val[le];
int w [le];
int dp[le+5];

int min(int a, int b) { return (a < b) ? a : b; }

int knapsack(int n, int W) {
    fill(dp, dp+(le+2), inf);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = le; j >= val[i]; j--) 
                dp[j] = min(w[i] + dp[j-val[i]], dp[j]);
    for (int i = le; i >= 0; i--)
      if (dp[i] <= W) return i;
    return 0;
}

int main() {
    int n, W; cin >> n >> W;
    for (int i = 1; i <= n; i++) cin >> val[i] >> w[i];
    cout << knapsack(n, W) << endl;
}

