/*************************************
 * @problem The 3n + 1 problem UVA - 100 
 * @author  Amirul Islam (shiningflash)
 *************************************/

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
#define le 46340
#define sz 4792
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793

/**Define input**/
#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long lld;

using namespace std;

/**********************End*******************/

long cycle(long n) {
  long cnt = 1;
  while (n != 1) {
    n = (n % 2 == 0) ? n / 2 : (n * 3) + 1;
    cnt++;
  }
  return cnt;
}

int main() {
  long a, b, cnt;
  while (cin >> a >> b) {
    cout << a << " " << b << " ";
    if (a > b) a ^= b ^= a ^= b;
    cnt = 1;
    for (long i = a; i <= b; i++)  cnt = max(cnt, cycle(i));
    cout << cnt << endl;
  }
}
