#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	ll n, m; cin >> n >> m;
	ll d, p=1;
	ll ris = 0;
	for (ll i = 0; i < m; i++) {
		cin >> d;
		ris+=(d>=p? d-p : n-p+d);
		p = d;
	}
	cout << ris << "\n";
 
	return 
