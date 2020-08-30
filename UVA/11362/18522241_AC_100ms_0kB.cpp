#include <bits/stdc++.h>
using namespace std;

struct node {
	bool word;
	int cnt;
	node* next[11];

	node() {
		word = false;
		cnt = 0;
		for (int i = 0; i < 10; next[i] = NULL, i++);
	}
} * root;

bool work(char* str, int len) {
	node* cur = root;
	bool ans = false;
	for (int i = 0; i < len; i++) {
		int d = str[i] - '0';
		if (cur->next[d] == NULL) cur->next[d] = new node();
		cur = cur->next[d];
		cur->cnt++;
		if(cur->word) ans = true;
	}
	cur->word = true;
	if(cur->cnt > 1) ans = true;
	return ans;
}

void del(node* cur) {
	for (int i = 0; i < 10; i++)
		if (cur->next[i]!= NULL) del(cur->next[i]);
	delete(cur);
	return;
}

int main() {
	int n, t;
	for (scanf("%d", &t); t--; ) {
		root = new node();
		bool tmp, ans = false;
		cin >> n;
		for (int i = 0; i < n; i++) {
			char s[10010];
			scanf("%s", s);
			tmp = work(s, strlen(s));
			if(tmp) ans = true;
		}
		if(ans) puts("NO");
		else puts("YES");
		del(root);
	}
	return 0;
}

