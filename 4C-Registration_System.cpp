#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
string s;
 
bool trova(pair<string, int>& el) {
	return el.first == s;
}
 
int main() {
	int n; cin >> n;
	vector<pair<string, int> > db;
	for (int i = 0; i < n; i++) {
		cin >> s;
		auto it = find_if( db.begin(), db.end(), trova );
		if (it==db.end()) {
			db.push_back(make_pair(s, 0));
			cout << "OK" << "\n";
		} else {
			(it->second)++;
			cout << (it->first)+to_string(it->second) << "\n";
		}
	}
 
	return 0;	
}
