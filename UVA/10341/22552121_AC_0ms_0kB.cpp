#include <bits/stdc++.h>
using namespace std;

#define F(x) (p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u) 

const double eps = 1e-9;
double p, q, r, s, t, u;

int main() {
    //freopen("in", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    
    while (scanf("%lf %lf %lf %lf %lf %lf", &p, &q, &r, &s, &t, &u) != EOF) {
        double low = 0, high = 1, mid;
        
        if (F(low) < -eps || F(high) > eps) {
            printf("No solution\n");
        }
        else {
            for (int i = 0; i < 50; i++) {
                mid = (low + high) / 2.0;
                if (F(mid) > 0) low = mid;
                else high = mid;
            }
            printf("%.4lf\n", low);
        }
    }
    return 0;
}