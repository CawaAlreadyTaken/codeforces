#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	ll n, k; cin >> n >> k;
	if (n%2) { //se è dispari
		if (k <= n/2+1) {
			cout << k*2-1 << "\n";
			return 0;
		} else {
			cout << (k-n/2-1)*2 << "\n";
			return 0;
		}
	} else { //se è pari
		if (k <= n/2) {
			cout << k*2-1 << "\n";
			return 0;
		} else {
			cout << (k-n/2)*2 << "\n";
			return 0;
		}
	}
	return 0;
}
