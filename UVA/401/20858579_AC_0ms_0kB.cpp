#include <bits/stdc++.h>
using namespace std;

string R = "AEHIJLMOSTUVWXYZ12358";
string M = "A3HILJMO2TUVWXY51SEZ8";

char s[22], mir[256];

bool isPalindrome() {
	int l = 0, r = strlen(s) - 1;
	while (l <= r) {
		if (s[l] != s[r]) return false;
		l++; r--;
	}
	return true;
}

bool isMirr() {
	int l = 0, r = strlen(s) - 1;
	while (l <= r) {
		if (mir[s[l]] != s[r]) return false;
		l++; r--;
	}
	return true;
}

int main() {
	for (int i = 0; i < 256; i++) mir[i] = ' ';
	for (int i = 0; R[i]; i++) mir[R[i]] = M[i];
	while (~scanf("%s", s)) {
		if (isPalindrome()) {
			if (isMirr()) printf("%s -- is a mirrored palindrome.\n\n", s);
			else printf("%s -- is a regular palindrome.\n\n", s);
		}
		else {
			if (isMirr()) printf("%s -- is a mirrored string.\n\n", s);
			else printf("%s -- is not a palindrome.\n\n", s);
		}
	}
}