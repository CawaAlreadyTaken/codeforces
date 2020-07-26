#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 10000
 
int main() {
	string s; cin >> s;
	if (s.length()<3) {
		cout << s << "\n";
		return 0; 
	}
	for (int i = 0; i < s.length()-2; i++) {
		if (s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B') {
			s[i] = '.';
			s[i+1] = '.';
			s[i+2] = '.';
		}
	}
	bool flag = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i]=='.') {
			if (flag) cout << " ";
			flag = false;
		} else {
			cout << s[i];
			flag = true;
		}
	}
	return 0;
}
