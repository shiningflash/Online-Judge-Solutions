#include <bits/stdc++.h>
using namespace std;
#define ll long long int

char s[210];
ll mx = 0;

struct node {
	bool mark;
	ll cnt;
	node* next[10];
	node() {
		mark = false;
		cnt = 0;
		for (int i = 0; i < 2; next[i] = NULL, i++);
	}
} * root;

void insert(char* str, int len) {
	node* cur = root;
	for (int i = 0; i < len; i++) {
		int d = str[i] - '0';
		if (cur->next[d] == NULL) cur->next[d] = new node();
		cur = cur->next[d];
		cur->cnt++;
		mx = max(mx, (i+1)*cur->cnt);
	}
	cur->mark = true;
}

void del(node* cur) {
	for (int i = 0; i < 2; i++)
		if (cur->next[i]) del(cur->next[i]);
	delete(cur);
}

int main() {
//	freopen("in", "r", stdin);
	int t, n;
	for (scanf("%d", &t); t--; ) {
		scanf("%d", &n);
		root = new node();
		mx = 0;
		while(n--) {
			scanf(" %s", s);
			int len = strlen(s);
			insert(s, len);
		}
		printf("%lld\n", mx);
		del(root);
	}
	return 0;
}
