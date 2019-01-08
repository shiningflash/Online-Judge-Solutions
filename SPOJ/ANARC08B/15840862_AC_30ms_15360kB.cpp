#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<string,int> m;

string arr[] = {"063", "010", "093", "079", "106", "103", "119", "011", "127", "107"};

int disit(string str, int len) {
  int value = 0, i = 0;
/*  for (int i = 0; i < len; i += 3) {
    string st = str.substr(i, i+2);
    for (int i = 0; i < 10; i++) {
      if (st == arr[i]) {
        value = (value * 10) + i;
      }
    }
  }*/
  int posit = len-3;
  while(posit >= 0) {
    value += m[str.substr(posit, 3)] * pow(10, i);
    i++;
    posit = posit - 3;
  }
  return value;
}

string sol(int ans) {
  string nw = "";
    while(ans != 0) {
      int rem = ans % 10;
      map <string, int> :: iterator it;
      for(it = m.begin(); it != m.end(); it++) {
        if (it->second == rem) {
          nw = (it->first) + nw;
          break;
        }
      }
      ans /= 10;
  }
  return nw;
}

int main() {
  m["063"]=0;
  m["010"]=1;
  m["093"]=2;
  m["079"]=3;
  m["106"]=4;
  m["103"]=5;
  m["119"]=6;
  m["011"]=7;
  m["127"]=8;
  m["107"]=9;

	while (true) {
    string s, a, b;
    cin >> s;

    if (s == "BYE") break;
    int i = 0, len1 = 0, len2 = 0;

    for (i = 0; i < s.length(); i++) {
      if(s[i] == '+') break;
      a += s[i];
      len1++;
    }

    for (i = i+1; i < s.length() - 1; i++) {
      b += s[i];
      len2++;
    }
//    cout << a << " " << b << endl;'

    int p = disit(a, len1);
    int q = disit(b, len2);
    int ans = p + q;

/*    int maxi = max(len1, len2);
    int k = maxi / 3;

    cout << s;

    while(ans != 0) {
      --k;
      int z = ans / pow(10, k);
      ans = ans % (int) pow(10, k);
      cout << arr[z];
    }
    cout << endl;*/

    cout << s << sol(ans) << endl;
  }
	return 0;
}