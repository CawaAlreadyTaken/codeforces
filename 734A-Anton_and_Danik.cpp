#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main () {
	int n; cin >> n;
	string s; cin >> s;
	int a = 0, d = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i]=='D') d++;
		else a++;
	}
	if (a>d) cout << "Anton" << "\n";
	else if (a<d) cout << "Danik" << "\n";
	else cout << "Friendship" << "\n";
	return 0;
}
