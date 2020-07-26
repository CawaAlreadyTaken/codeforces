#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t, n; cin >> t;
	while(t--) {
		cin >> n;
		int a = pow(2, n);
		for (int i = 1; i < n/2; i++) a+=pow(2, i);
		int b = 0;
		for (int i = n/2; i < n; i++) b+=pow(2, i);
		cout << a-b << "\n";
	}
	return 0;
}
