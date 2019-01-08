#include <bits/stdc++.h>
using namespace std;
bool a[10000000];

void siv() {
	int N=10000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) a[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(a[i]==0) {		
			for(int j=i*i;j<=N;j+=i) a[j]=1;
		}
	}
	a[1]=1;
}

int main() {
  siv();
  int n;
  scanf("%d", &n);
  if (n % 2 == 0) {
    int x = n / 2;
    int y = n - x;
    while (a[x] == 0 || a[y] == 0) {
      x++;
      y--;
    }
    if (x > y) printf("%d %d\n", y, x);
    else printf("%d %d\n", x, y);
  }
  else {
    int x = n / 2;
    int y = n - x;
    while (a[x] == 0 || a[y] == 0) {
      x++;
      y--;
    }
    if (x > y) printf("%d %d\n", y, x);
    else printf("%d %d\n", x, y);
  }
  return 0;
}