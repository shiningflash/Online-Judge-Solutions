#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll __mp(ll n) {
    ll cnt(0);
    map <ll, bool> mp;
    while(!mp[n]){
        mp[n] = 1;
        n++;
        while(n % 10 == 0) n /= 10;
        cnt++;
    }
    return cnt;
}

int main(){
    ll n;
    int co = 0;
    cin >> n;
    cout << __mp(n) << "\n";
    return 0;
}