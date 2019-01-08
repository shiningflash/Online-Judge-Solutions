//Algorithms / Searching Algorithms / Binary_Search.cpp
//@author PetarV

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
  
char name[105][105];  
char song[16][16] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};  
  
int main()  
{  
    int n, i, j, k;  
    while(~scanf("%d",&n))  
    {  
        for(i = 0; i < n; scanf("%s",name[i]), i++);  
        k = n / 16; if (n % 16) k++;  
        for(i = 0; i < 16 * k; printf("%s: %s\n", name[i%n], song[i%16]), i++);  
    }
    return 0;  
} 