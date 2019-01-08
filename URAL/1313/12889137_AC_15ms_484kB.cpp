#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

	int array[100][100];
	
	for(int i = 0; i < n; ++i) {
  	for(int j = 0; j < n; ++j) {
  	  scanf("%d", &array[i][j]);
  	}
	}
	
	for(int i = 0; i < 2*n-1; ++i) {
  	for(int j = 0; j <= i && j < n; ++j) {
  	  int f = i-j;
  	  if(f >= 0 && f < n) {
  	    cout << array[f][j] << " ";
  	  }
  	}
	}
	cout << endl;
	return 0;
}