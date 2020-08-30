#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    int n, x, t25(0), t50(0), t100(0);
    for (cin >> n; n--; ) {
    	cin >> x;
    	if (x == 25) t25++;
    	else if (x == 50) {
    		t50++;
    		if (t25 > 0) t25--;
    		else {
    			cout << "NO\n";
    			return 0;
    		}
    	}
    	else {
    		if (t50 > 0) {
    			t50--;
    			if (t25 > 0) t25--;
    			else {
    				cout << "NO\n";
    				return 0;
    			}
    		}
    		else if (t25 > 2) t25 -= 3;
    		else {
    			cout << "NO\n";
    			return 0;
    		}
    	}
    }
    cout << "YES\n";
    return 0;
}