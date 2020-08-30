#include <bits/stdc++.h>
using namespace std;

bool isWord(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isNum(char ch) {
    return (ch >= '0' && ch <= '9');
}

int str2int(string c) {
    int  x = 0;
    for (int k = 0; k < c.length(); k++) {
        x = x * 10 + (c[k] - '0');
    }
    return x;
}

void process(string& b, list<string> &word, char ch) {
    list <string>:: iterator it;
    if (b.empty()) cout << ch;
    else {
        if (isNum(b[0])) {
            int pos = str2int(b);
            it = word.begin();
            advance(it, pos-1);
            cout << *it;
            b = *it;
            word.erase(it);
            word.push_front(b);
        } 
        else cout << b, word.push_front(b);
        cout << ch, b = "";
    }
}

int main() {
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    string a;
    list<string> word;
    while (getline(cin, a)) {
        if (a == "0") break;
        string b = "";
        for (int i = 0; i < a.size(); i++) {
            if (isWord(a[i]) || isNum(a[i])) b += a[i];
            else process(b, word, a[i]);
        }
        process(b, word, '\n');
    }
    return 0;
}