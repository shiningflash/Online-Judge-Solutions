#include <bits/stdc++.h>
using namespace std;

struct node {
    int cnt;
    node *next[26];
    node() {
        cnt = 0;
        for (int i = 0; i < 26; next[i] = NULL, i++);
    }
} * root;

void add(string s) {
    node *cur = root;
    cur->cnt++;
    for (int i = 0; s[i]; i++) {
        int id = s[i] - 'a';
        if (cur->next[id] == NULL) cur->next[id] = new node();
        cur = cur->next[id];
        cur->cnt++;
    }
}  

int find(string s) {
    node *cur = root;
    for (int i = 0; s[i]; i++) {
        int id = s[i] - 'a';
        if (cur->next[id] == NULL) return 0;
        cur = cur->next[id];
    }
    return cur->cnt;
}

int main() {
    int n;
    root = new node();
    string s, ss;
    for (scanf("%d", &n); n--; ) {
        cin >> s >> ss;
        if (s[0] == 'a') add(ss);
        else printf("%d\n", find(ss));
    }
}