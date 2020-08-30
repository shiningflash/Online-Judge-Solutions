#include <bits/stdc++.h>
using namespace std;

bool ch[102];

int main(){
    //freopen("input.txt", "r", stdin);
    for(int i = 0; i < 102; ch[i] = false, i++);
    ch['A'] = ch['H'] =  ch['I'] =  ch['M'] =  ch['O'] =  ch['T'] =  ch['U'] =  ch['V'] =  ch['W'] =  ch['X'] =  ch['Y'] =  true;
    string s;
    cin >> s;
    bool f = true;
    if(s.size() % 2 != 0){
        char cc = s[s.size() / 2];
        f = ch[cc];
    }
    for(int i = 0, j = s.size() - 1; i < s.size() /  2 && f; i++, j--){
        if(s[i] != s[j]) f = false;
        if(ch[s[i]] == false) f = false;
        if(ch[s[j]] == false) f = false;
    }
    printf("%s\n", f ? "YES" : "NO");
    return 0;
}
