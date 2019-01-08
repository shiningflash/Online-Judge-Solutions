#include <bits/stdc++.h>
using namespace std;

int fnc(vector <int> n){
  int len = n.size();
  int sum = 0;
  int g = 0;
  for(int i = 0; i < len - 1; i++){
    for(int j = i + 1; j < len; j++){
      g = __gcd(n[i], n[j]);
      sum = max(sum, g);
    }
  }
  return sum;
}

int main()
{
  int t, n = 0, sum, len;
  string s;
  scanf("%d", &t);
  getline(cin, s);
  while(t--){
    sum = n = 0;
    getline(cin, s);
    vector <int> v;
    len = s.size();
    for(int i = 0; i < len; i++){
      if(s[i] != ' ') n = (n * 10) + (s[i] - '0');
      else{
        v.push_back(n);
        n = 0;
      }
    }
    if(s[len - 1] != ' ') v.push_back(n);
    sum = fnc(v);
    printf("%d\n", sum);
  }
  return 0;
}