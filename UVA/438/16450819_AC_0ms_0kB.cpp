
/**
 * @problem The Circumference of the Circle - UVA 438
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

double distance(double a, double b, double c, double d) {
    return sqrt(fabs((a-c)*(a-c)) * 1.0 + abs((b-d)*(b-d)) * 1.0);
}

int main() {
    double x1, y1, x2, y2, x3, y3, a, b, c, s, d, r;
    while (scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF) {
        a = distance(x1, y1, x2, y2);
        b = distance(x2, y2, x3, y3);
        c = distance(x1, y1, x3, y3);
        s = (a+b+c) / 2;
        d = sqrt(s*(s-a)*(s-b)*(s-c));
        r = a*b*c / (4*d);
        printf("%.2lf\n", 2 * PI * r);
    }
    return 0;
}
