#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
bool prime(int n) {
	for (int i = 2; i*i <= n; i++) {
		if (!(n%i)) return false;
	}
	return true;
}
 
int main() {
	ll t; cin >> t;
	ll a;
	while(t--) {
		cin >> a;		
		if (a == 1) {
			cout << "NO" << "\n";
			continue;
		}
		if (floor(sqrt(a))*floor(sqrt(a)) == a) {
			if (prime(floor(sqrt(a)))) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		} else cout << "NO" << "\n";
	}
	return 0;	
}
