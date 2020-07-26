#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		int a[n], b[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) cin >> b[i];
		sort(a, a+n);
		sort(b, b+n);
		for (int i = 0; i < k; i++) {
			if (b[n-i-1] >= a[i]) a[i]=b[n-i-1];
			else break;
		}
		int ris = 0;
		for (int i = 0; i < n; i++) ris+=a[i];
		cout << ris << "\n";
	}
	return 0;
}
