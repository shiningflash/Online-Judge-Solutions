#include <bits/stdc++.h>
using namespace std;

int sol(string ch) {
  int e = 0, k, j;
  int len = ch.length();
//    char h[] = new char[len+1];
    for (int i = 1; i < len; i++) {
      if (ch[i] < ch[e]) e = i;
      else if (ch[i] == ch[e]) {
        k = e; j = i;
        bool t = false;
        for (int c = 0; c < len; c++) {
          int p = e + c;
          if (p >= len) p -= len;
          int q = j + c;
          if (q >= len) q-= len;
          if (ch[p] > ch[q]) {
            t = true;
            break;
          }
          else if (ch[q] > ch[p]) {
            t  = false;
            break;
          }
        }
        if (t) e = j;
        }
      }
      return e;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int x = 0; x < n; x++) {
    string ch;
    cin >> ch;
//    char ch[] = s.toCharArray();
     int e = sol(ch);
     printf("%d\n", e + 1);
  }
}