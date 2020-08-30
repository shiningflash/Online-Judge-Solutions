#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double h, l;
    scanf("%lf %lf", &h, &l);
    printf("%.15lf\n", ((h*h + l*l) / (2.0*h)) - h);
}
