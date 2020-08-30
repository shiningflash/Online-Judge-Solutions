#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
map<string, int>:: iterator it;

int main() {
    int n;
    string s, word;
    bool case1 = 1;

    while (cin >> n) {
        bool flag = 0;
        while (getline(cin, s) && s != "EndOfText") {
            int len = s.size();
            for (int i = 0; i < len; i++) {
                if (isalpha(s[i])) {
                    word = "";
                    while (isalpha(s[i])) word.push_back(tolower(s[i++]));
                    mp[word]++;
                }
            }
        }

        if (!case1) puts("");

        for (it = mp.begin(); it != mp.end(); it++) {
            if (it->second == n) {
                flag++;
                cout << it->first << "\n";
            }
        }

        if (!flag) puts("There is no such word.");

        flag = 0;
        case1 = 0;
        mp.clear();
    }
}