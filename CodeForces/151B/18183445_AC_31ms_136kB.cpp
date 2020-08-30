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
#include <limits>
#include <bits/stdc++.h>

#define mem(x, y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define _sort(s, n) sort(s, s+n)
#define sqr(x) ((x)*(x))

#define le 5001
#define ERR 1e-9
#define pi (2*acos(0))
#define PI 3.141592653589793
#define INT_MX 2147483647

#define scanint(a) scanf("%d",&a)
#define scanLLD(a) scanf("%lld",&a)

typedef long long ll;
using namespace std;

////////////////////////////////////////

int fnc(string s){
    stringstream ss(s);
    vector<int> v;
    char ch;
    while(ss >> ch)
        if(ch != '-')
			v.push_back(ch - '0');
    if (v[0] == v[1] && v[1] == v[2] && v[2] == v[3] && v[3] == v[4] && v[4] == v[5]) return 1;
	if (v[0] > v[1] && v[1] > v[2] && v[2] > v[3] && v[3] > v[4] && v[4] > v[5]) return 2;
    return 3;
}

int main() {
    // freopen("in", "r", stdin);
    vector <string> v1, v2, v3;
    int n, m, len;
    int m1 = 0, m2 = 0, m3 = 0;
    cin >> n;
    int taxi[n];
    int pizza[n];
    int girl[n];
    string name[n];
    memset(taxi, 0, sizeof(taxi));
    memset(pizza, 0, sizeof(pizza));
    memset(girl, 0, sizeof(girl));
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        cin >> name[i];
        string s;
        while (k--) {
            cin >> s;
            int l = fnc(s);
            if (l == 1) taxi[i]++;
            else if (l == 2) pizza[i]++;
            else if (l == 3) girl[i]++;
        }
    }
    for (int j = 0; j < n; j++) {
            m1 = max(m1, taxi[j]);
            m2 = max(m2, pizza[j]);
            m3 = max(m3, girl[j]);
	}
	for (int i = 0;  i < n; i++) {
		if (m1 == taxi[i]) v1.push_back(name[i]);
		if (m2 == pizza[i]) v2.push_back(name[i]);
		if (m3 == girl[i]) v3.push_back(name[i]);
	}
    printf("If you want to call a taxi, you should call: ");
        for(int i = 0; i < v1.size() - 1; i++){
            cout << v1[i] << ", " ;
        }
        cout << v1[v1.size() - 1] << "." << endl;
        printf("If you want to order a pizza, you should call: ");
        for(int i = 0; i < v2.size() - 1; i++){
            cout << v2[i] << ", " ;
        }
        cout << v2[v2.size() - 1] << "." << endl;
        printf("If you want to go to a cafe with a wonderful girl, you should call: ");
        for(int i = 0; i < v3.size() - 1; i++){
            cout << v3[i] << ", " ;
        }
        cout << v3[v3.size() - 1] << "." << endl;
}