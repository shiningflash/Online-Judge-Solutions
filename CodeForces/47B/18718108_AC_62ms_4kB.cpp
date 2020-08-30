#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> m;
    m['A'] = 0;
    m['B'] = 0;
    m['C'] = 0;
    string s;

    for (int i = 1; i <= 3; i++) {
        getline(cin, s);
        if (s[1] == '<') m[s[2]]++;
        else m[s[0]]++;
    }

    if (m['A'] == 1 && m['B'] == 1 && m['C'] == 1) printf("Impossible");
    else {
        if (m['A'] == 0) printf("A");
        else if (m['B'] == 0) printf("B");
        else if (m['C'] == 0) printf("C");

        if (m['A'] == 1) printf("A");
        else if (m['B'] == 1) printf("B");
        else if (m['C'] == 1) printf("C");

        if (m['A'] == 2) printf("A");
        else if (m['B'] == 2) printf("B");
        else if (m['C'] == 2) printf("C");
    }
    cout << "\n";
}