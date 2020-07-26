#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int alfabeto[26];
 
int main() {
	int s, n; cin >> s >> n;
	pair <int, int> p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}
	sort(p, p+n);
	for (int i = 0; i < n; i++) {
		if (s > p[i].first) s+=p[i].second;
		else {
			cout << "NO" << "\n";
			return 0;
		}
	}
	cout << "YES"  << "\n";
	return 0;	
}
