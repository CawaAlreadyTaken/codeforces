#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
string up(string s) {
	for (int  i = 0; i < s.length(); i++) {
		if (s[i]>'Z') s[i]-=32;
	}
	return s;
}
 
string down(string s) {
	for (int  i = 0; i < s.length(); i++) {
		if (s[i]<='Z') s[i]+=32;
	}
	return s;
}
 
int main() {
	string s; cin >> s;
	int u = 0, d = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i]<='Z') u++;
		else d++;	
	}
	if (d >= u) cout << down(s) << "\n";
	else cout << up(s) << "\n";
	return 0;
}
