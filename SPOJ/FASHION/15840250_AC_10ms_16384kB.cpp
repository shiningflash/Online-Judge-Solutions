#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void swap(int arr[],int a,int b) {
	int temp;
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int part(int arr[], int start, int end) {
	int p, i, pdex;
	p = arr[end];
	pdex = start;
	for(i = start; i < end; i++) {
		if (arr[i] <= p) {
			swap(arr,i,pdex);
			pdex++;
		}
	}
	swap(arr, pdex, end);
	return pdex;
}

void qsort(int arr[], int start, int end)
{
	int pdex;
	if (start >= end) {
		return;
	}
	pdex = part(arr, start, end);
	qsort(arr, start, pdex - 1);
	qsort(arr , pdex + 1, end);
}

int main()
{
	ll t, i, j, n, sum;
	int a[1000], b[1000];
	cin >> t;
	for (i = 0; i < t; i++) {
		sum = 0;
		cin >> n;
		for (j = 0; j < n; j++) {
			cin >> a[j];
		}
		for (j = 0; j < n; j++) {
			cin >> b[j];
		}
		qsort(a, 0, n-1);
		qsort(b, 0, n-1);
		for (j = 0; j < n; j++) {
			sum = sum + (a[j] * b[j]);
		}
		cout << sum << endl;
	}
	return 0;
}
