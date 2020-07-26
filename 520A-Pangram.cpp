#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i]<='Z')s[i]+=32;
	}
	set<char> t;
	for (int i = 0; i < s.length(); i++) t.insert(s[i]);
	if (t.size()>25) cout << "YES" << "\n";
	else cout << "NO" << "\n";
	return 0;
}
