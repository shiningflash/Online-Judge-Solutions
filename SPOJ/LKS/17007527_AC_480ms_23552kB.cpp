/*************************************
 * Large Knapsack SPOJ - LKS >> (DP)
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
#define le 2000000
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

int val[505];
int w [505];
int dp[le+5];

int max(int a, int b) { return (a > b) ? a : b; }

int knapsack(int n, int W) {
    CLEAR(dp);
    for (int i = 0; i < n; i++)
        for (int j = W; j >= w[i]; j--) 
                dp[j] = max(val[i] + dp[j-w[i]], dp[j]);
    return dp[W];
}

int main() {
    int n, W; cin >> W >> n;
    for (int i = 0; i < n; i++) cin >> val[i] >> w[i];
    cout << knapsack(n, W) << endl;
}
