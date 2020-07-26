#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll binom(int a, int b) {
	ll ris = 1;
	for (ll i = a; i > min(b, a-b); i--) {
		ris*=i;
	}
	ll c = 1;
	for (ll i = 1; i <= max(b, a-b); i++) {
		c*=i;
	}
	ris/=c;
	return ris;
}

int main() {
	ll n; cin >> n;
	ll h = (n-1)*2;
	cout << binom(h, h/2) << "\n";
	return 0;
}
