#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int n; cin >> n;
	int a;
	int s[n];
	for (int i = 0; i < n; i++) {
		cin >> a;
		s[a-1] = i;
	}
	for (int i = 0; i < n; i++) {
		cout << s[i]+1 << " ";
	}
	return 0;
}
