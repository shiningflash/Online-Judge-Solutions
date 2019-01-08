#include <bits/stdc++.h>
#define REP1(i, a, n) for (int i = a; i < n; i++)
#define REP2(j, b, c) for (int j = b; j >= c; j--)
using namespace std;
int t, n, f, r[1000000];
double mid, high, low;

int numberofpeople(double volume) {
  int people = 0;
  REP2(i, n-1, 0) {
    if (people <= (f+1))
      people += (int) ((M_PI * r[i] *r[i]) / mid);
  } 
  return people;
}

bool ok(double x) {
  return numberofpeople(x) < (f+1);
}

int main() {
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &n, &f);
    REP1(i, 0, n) scanf("%d", &r[i]);
    sort(r, r+n);
    low = 0; high = 4e8;
    REP1(i, 0, 100) {
//    cout << low << "   " << high << endl;
      mid = (low + high) / 2.0;
      if (ok(mid)) high = mid;
      else low = mid;
    }
    printf("%.4f\n", low);
  }
  return 0;
}