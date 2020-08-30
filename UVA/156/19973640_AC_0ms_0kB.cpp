#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("in", "r", stdin);
    string s, word;
    map <string, string> mp1;
    map <string, int> mp2;
    while (cin >> s && s != "#") {
        word = "";
        for (auto i: s) word += tolower(i);
        sort(word.begin(), word.end());
        mp1[s] = word;
        mp2[word] += 1;
    }
    for (auto i : mp1)
        if (mp2[i.second] == 1) cout << i.first << "\n";
    return 0;
}