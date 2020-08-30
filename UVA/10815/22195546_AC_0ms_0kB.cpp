#include <bits/stdc++.h>
using namespace std;

bool isLetter(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main() {
    //freopen("in.txt", "r", stdin);
    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    char c;
    string word;
    set<string> st;
    while ((c = getchar()) != EOF) {
        if (isLetter(c)) word += tolower(c);
        else if (word.size() > 0) {
            st.insert(word);
            word = "";
        }
    }
    set<string>::iterator it;
    for (it = st.begin(); it != st.end(); it++) cout << *it << "\n";
    return 0;
}