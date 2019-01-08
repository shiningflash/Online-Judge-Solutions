#include <iostream>
using namespace std;

int main() {
  int b, p, m;
  while(cin >> b >> p >> m) {
    b = b % m;
    int sum = 1;
    while (p) {
      if (p & 1) {
        sum = (sum * b) % m;
      }
      b = (b * b) % m;
      p >>= 1;
    }
    printf("%d\n", sum);
  }
}