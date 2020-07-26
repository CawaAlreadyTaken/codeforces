#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
	string s1, s2; cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++) {
		if (s2[s2.length()-i-1]!=s1[i]) {
			cout << "NO" << "\n";
			return 0;
		}
	}
	cout << "YES" << "\n";
	return 0;
}
