#include <bits/stdc++.h>
using namespace std;

int x, y, val, arr[102][102];

int rec(int a, int b) {
  if(a >= 40 && b >= 40) {
    return 0;
  }
  
  int &ans = arr[a][b];
  
  if(ans == -1) {
    if(a >= 40) {
      if(x > a) {
        val = rec(a + 1, b);
        ans = max(ans, 2 + val);
      }
      val = rec(a,b + 1);
      ans = max(ans, 1 + val);
    }
    else {
      val = rec(a + 1,b);
      ans = max(ans, 1 + val);
      if(y > b) {
        val = rec(a,b + 1);
        ans = max(ans, 2 + val);
      }
    }
  }
  return ans;
}

int main(){
  cin >> x >> y;
  memset(arr,-1,sizeof arr);
  cout << rec(0, 0) << endl;
  return 0;
}