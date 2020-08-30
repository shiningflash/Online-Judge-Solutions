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
        for (int j = n-1; j > i; j--) {
            if (arr[j] < arr[j-1]) swap(arr[j], arr[j-1]), x++;
        }
    }
    cout << arr[0];
    for (int i = 1; i < n; i++) cout << " " << arr[i];
    cout << endl << x << endl;

    return 0;
}
