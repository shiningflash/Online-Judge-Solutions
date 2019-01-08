#include <bits/stdc++.h>
using namespace std;

long sequence(long n) {
  long count1 = 1;  // sequence number

  while (n != 1) {
    if (n % 2 == 0) n /= 2;  // if n even, devide by 2
    else n = (n * 3) + 1;  // if n odd, n = 3n + 1
    count1++;  // increment sequence number
  }

  return count1;
}

int main() {
  long a, b, up, low, count;

  while (cin >> a >> b) {
    up = max(a, b);  // upper level
    low = a + b - up;  // lower level
    count = 1;

    for (long i = low; i <= up; i++) {
      count = max(count, sequence(i));  // maximum cycle length
    }

    cout << a << " " << b << " " << count << endl;
  }
}