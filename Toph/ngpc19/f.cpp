#include <bits/stdc++.h>
using namespace std;
#define LLI long long int
 
const double PI = acos(-1.0);
 
int main() {
    // freopen("in", "r", stdin);
 
    int t;
    for (cin >> t; t--; ) {
        double ab, ac, ad, bd, bc, thetaA;
        cin >> ab >> ad >> thetaA;
        thetaA *= ((2*PI / 360)); // degree to radians
        bd = sqrt((ab*ab) + (ad*ad) - (2*ab*ad*cos(thetaA)));
        bc = 2 * bd;
        // cout << bd << " " << bc << endl;
 
        double thetaC = acos(((ab*ab) + (bd*bd) - (ad*ad)) / (2*ab*bd));
        ac = sqrt((ab*ab) + (bc*bc) - (2*ab*bc*cos(thetaC)));
        //cout << thetaC << " " << ac << endl;
 
        double sum = (ab*ab) + (ac*ac);
        printf("%.10lf\n", sum);
    }
}
