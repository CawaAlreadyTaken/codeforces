#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int alfabeto[26];
 
int main() {
	string s1, s2, s3; cin >> s1 >> s2 >> s3;
	for (int i = 0; i < s1.length(); i++) alfabeto[s1[i]-65]++;
	for (int i = 0; i < s2.length(); i++) alfabeto[s2[i]-65]++;
	for (int i = 0; i < s3.length(); i++) alfabeto[s3[i]-65]--;
	for (int i = 0; i < 26; i++) if (alfabeto[i]) {
		cout << "NO" << "\n";
		return 0;
	}
	cout << "YES" << "\n";
	return 0;
}
