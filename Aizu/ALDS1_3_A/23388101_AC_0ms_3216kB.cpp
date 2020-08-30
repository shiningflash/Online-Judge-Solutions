#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int _mx = 2e6;
int a[_mx+5];

int main() {
    // freopen("in.txt", "r", stdin);

    string s;
    LLI a, b, n, ans;
    stack <LLI> st;
    while (cin >> s) {
        if (s[0] == '+') {
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(a + b);
        }
        else if (s[0] == '-') {
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(b - a);
        }
        else if (s[0] == '*') {
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(a * b);
        }
        else {
            n = s[0] - '0';
            for (int j = 1; j < s.size(); j++) n = n * 10 + (s[j] - '0');
            st.push(n);
        }
    }
    cout << st.top() << endl;

    return 0;
}
