#include <bits/stdc++.h>

using namespace std;
bool n[102];

bool fnc(int len){
  for(int i = 1; i <= len; i++){
    if(!n[i]) return 0;
  }
  return 1;
}
int main(){
  int lev, a, b, c;
  scanf("%d", &lev);
  for(scanf("%d", &a); a--; ){
    scanf("%d", &c);
    n[c] = 1;
  }
  for(scanf("%d", &b); b--; ){
    scanf("%d", &c);
    n[c] = 1;
  }
  bool f = fnc(lev);
  printf("%s\n", f ? "I become the guy." : "Oh, my keyboard!");
  return 0;
}