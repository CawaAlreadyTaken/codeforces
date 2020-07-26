#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
string inverti(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i]>'Z') s[i]-=32;
		else s[i]+=32;
	}
	return s;
}
 
int main () {
	string s; cin >> s;
	if (s.length()==1) {
		if (s[0]>'Z') s[0]-=32;
		else s[0]+=32;
		cout << s << "\n";
	} else {
		if (s[0]<='Z') {
			for (int i = 1; i < s.length(); i++) {
				if (s[i]>'Z') {
					cout << s << "\n";
					return 0;
				}
			}
		} else {
			for (int i = 1; i < s.length(); i++) {
				if (s[i]>'Z') {
					cout << s << "\n";
					return 0;
				}
			}
		}
 
		cout << inverti(s) << "\n";
	} 
	
 
	return 0;
}
