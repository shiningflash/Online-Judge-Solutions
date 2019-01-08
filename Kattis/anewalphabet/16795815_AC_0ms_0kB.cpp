/*************************************
 * @problem Kattis - anewalphabet 
 * @author    Amirul Islam (user id: shiningflash)
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

typedef long long lld;

using namespace std;

/**********************End*******************/

int main() {
    string s[] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};
    string ss;
    getline(cin, ss);
    int len = ss.length();
    for (int i = 0; i < len; i++) {
        if (ss[i] >= 97 && ss[i] <= 122) cout << s[ss[i]-97];
        else if (ss[i] >= 64 && ss[i] <= 90) cout << s[ss[i]-65];
        else cout << ss[i];
    }
    cout << endl;
}