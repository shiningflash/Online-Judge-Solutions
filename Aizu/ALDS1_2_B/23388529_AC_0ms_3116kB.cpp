#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

const int _mx = 2e6;
int arr[_mx+5];

int main() {
    // freopen("in.txt", "r", stdin);

    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        int mn = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[mn]) mn = j;
        }
        if (mn != i) swap(arr[i], arr[mn]), x++;
    }
    cout << arr[0];
    for (int i = 1; i < n; i++) cout << " " << arr[i];
    cout << endl << x << endl;

    return 0;
}
