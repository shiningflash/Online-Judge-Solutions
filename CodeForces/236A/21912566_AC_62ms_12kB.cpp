#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<int> st;
    for (int i = 0; s[i]; i++) st.insert(s[i]-'a');
    if (st.size() % 2 == 0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
}
