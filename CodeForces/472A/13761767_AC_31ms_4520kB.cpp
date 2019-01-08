#include <bits/stdc++.h>
using namespace std;

bool status[1100000];
void siv(int N)
{
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{		
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
	
}

int main() {
  int num;
  cin >> num;
  siv(num);
  int lo = 4, hi = num - 4;
  while(true) {
    if (status[lo] && status[hi]) break;
    else lo++; hi--;
  }
	cout << lo << " " << hi << endl;
  return 0;
}