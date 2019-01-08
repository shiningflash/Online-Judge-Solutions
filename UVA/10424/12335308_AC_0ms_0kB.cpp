#include <bits/stdc++.h>
using namespace std;

int sum2(int n) {
		int sum = 0, val = 0, rem = 0;
		while (n != 0) {
			rem = n % 10; 
			sum += rem;
			n /= 10;
		}
		if (sum > 9) {
		  val = sum;
		  sum = 0;
		  while(val != 0) {
		    rem = val % 10; 
  			sum += rem;
  			val /= 10;
		  }
		}
		return sum;
	}

int sum1(string line) {
  int len = line.size();
  int sum = 0;
  for(int i = 0; i < len; i++) {
      if (line[i] >= 'a' && line[i] <= 'z') {
        sum += (int) line[i] - 96;
      }
      else if (line[i] >= 'A' && line[i] <= 'Z') {
        sum += (int) line[i] - 64;
    }
  }
    int ret = sum2(sum);
    return ret;
}

int main() {
  string line1, line2;
  int len1, len2;
  while (getline(cin,line1)) {
    getline(cin,line2);
    double sumPart1 = sum1(line1) * 1.0;
    double sumPart2 = sum1(line2) * 1.0;
    if (sumPart1 > sumPart2) {
        printf("%.2f %\n", (sumPart2/sumPart1)*100.0);
    }
    else {
          printf("%.2f %\n", (sumPart1/sumPart2)*100.0);
    }
  }
  }