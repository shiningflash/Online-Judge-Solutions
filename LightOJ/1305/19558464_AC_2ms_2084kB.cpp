#include <bits/stdc++.h>
using namespace std;

int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, area, t(0), tst;

int polygon_area() {
    int A1 = Ax*By + Bx*Cy + Cx*Dy + Dx*Ay;
    int A2 = Ay*Bx + By*Cx + Cy*Dx + Dy*Ax;
    return abs(A1 - A2) / 2.0;
}

int main() {
    for (scanf("%d", &tst); tst--; ) {
        scanf("%d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy);
        Dx = Ax + Cx - Bx;
        Dy = Ay + Cy - By;
        printf("Case %d: %d %d %d\n", ++t, Dx, Dy, polygon_area());
    }
}