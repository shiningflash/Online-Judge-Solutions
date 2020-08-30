#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair <string, int> &p, const pair <string, int> &s) {
    return (p.second > s.second || (p.second == s.second && p.first < s.first));
}

int main() {
    unordered_map <string, unordered_set <string> > mp1;
    unordered_map <string, int> mp2;
    vector <pair <string, int> > v;
    string str, nam;
    while (getline(cin, str) && str != "0") {
        mp1.clear(), mp2.clear(), v.clear();
        while (str != "1") {
            if (isupper(str[0])) nam = str, mp1[nam] = unordered_set<string>();
            else mp1[nam].insert(str);
            getline(cin, str);
        }
        for (auto it : mp1) {
            for (auto itr : it.second) mp2[itr]++;
        }
        for (auto it : mp1) {
            int tmp = 0;
            for (auto itr : it.second) {
                if (mp2[itr] <= 1) tmp++;
            }
            v.push_back({it.first, tmp});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto it : v) cout << it.first << " " << it.second << "\n";
    }
}