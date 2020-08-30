#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("in", "r", stdin);
    char c;
    string word;
    set <string> s;
    set <string>:: iterator it;
    while ((c = getchar()) !=  EOF) {
        if (c >= 'A' && c <= 'Z') word += (c - 'A' + 'a');
        else if (c >= 'a' && c  <= 'z') word += c;
        else if (word != "") {
            s.insert(word);
            word = "";
        }
    }
    for (it = s.begin(); it != s.end(); it++) cout << *it << "\n";
}