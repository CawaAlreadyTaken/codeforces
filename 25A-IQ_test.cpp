#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 10000
 
int main() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int p = 0, d = 0;
	for (int i = 0; i < 3; i++) if (a[i]%2) d++; else p++;
	if (p>d) {
		for (int i = 0; i < n; i++) {
			if (a[i]%2) {
				cout << i+1 << "\n";
				return 0;
			}
		}
	} else {
		for (int i = 0; i < n; i++) {
			if (!(a[i]%2)) {
				cout << i+1 << "\n";
				return 0;
			}
		}
 
	}
	return 0;
}
