#include <bits/stdc++.h>
using namespace std;

struct node {
    bool mark;
    node *next[26];
    node() {
        mark = false;
        for (int i = 0; i < 26; next[i] = NULL, i++);
    }
} * root;

bool insert(string s, int len) {
    node *cur = root;
    for (int i = 0; i < len; i++) {
        int id = s[i] - 'a';
        if (i == len-1 && cur->next[id] != NULL) return false;
        if (cur->next[id] == NULL) cur->next[id] = new node();
        cur = cur->next[id];
        if (cur->mark) return false;
    }
    cur->mark = true;
    return true;
}

int main() {
    int n;
    string s, bad;
    bool good = true;
    root = new node();
    
    for (scanf("%d", &n); n--; ) {
        cin >> s;
        if (!good) continue;
        good = insert(s, s.size());
        if (!good) bad = s;
    }
    if (good) cout << "GOOD SET\n";
    else cout << "BAD SET\n" << bad << "\n";
}