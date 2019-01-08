#include <bits/stdc++.h>
using namespace std;

int main() {
  double hour, minit, tim, h_ang, m_ang, ang;
  char ch;
  while (1) {
    cin >> hour >> ch >> minit;
    if (hour == 0 && minit == 0) break;
    
    tim = ((hour * 30) + (minit / 2)) - (minit * 6);
    
    if (tim < 0) tim = tim * (- 1);
    if (tim > 180) tim = 360- tim;
    printf("%.3lf", tim);
    cout << endl;
  }
  return 0;
}