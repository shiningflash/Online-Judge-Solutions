#include <bits/stdc++.h>
using namespace std;
int n[20], len;
string s;

void __sol() {
    bool flag = false;
    for (int i = 0; i < len; i++) {
        int d = s[i] - '0';
        if (!flag){
            if (n[d - 1] > d) {
                s[i] = n[d - 1] + '0';
                flag = 1;
            }
        }
        else if (flag) {
            if (n[d - 1] >= d) s[i] = n[d - 1] + '0';
            else break;
        }
    }
}

int main(){
    cin >> len;
    getchar();
    getline(cin, s);
    for(int i = 0; i < 9; cin >> n[i], i++);
    __sol();
    cout << s << endl;
    return 0;
}