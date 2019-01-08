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
#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase = 0, number, command;
    while (scanf("%d", &number)) {
        if (number < 0) break;
        for (command = 0; command <= 14; command++)
            if ((number <= 1 << command) and (number > 1 << (command-1))) break;
        printf("Case %d: %d\n", ++testcase, command);
    }
    return 0;
}
