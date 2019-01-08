// D - Cheap Travel 
// Amirul Islam

// Language: C++
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, m, a, b, ans, i;
    cin >> n >> m >> a >> b;
    ans = (n / m) * b;
    ans += (n % m) * a;
    for (i = 1; i <= n; i++) {
      if (i * m > n) break;
    }
    ans = min(ans, i*b);
    cout << min(ans, n*a) << endl;;
    return 0;
}

/*

// Language: Java
import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int a = sc.nextInt();
    int b = sc.nextInt();
    int ans;
    
    ans = (n / m) * b;
    ans += (n % m) * a;
    
    int i;
    for (i = 1; i <= n; i++) {
      if (i * m > n) break;
    }
    ans = Math.min(ans, i*b);
    
    int sol = n * a;
    System.out.println(Math.min(ans, sol));
    }
}
*/