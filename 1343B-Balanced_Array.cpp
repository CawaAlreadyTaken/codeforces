#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		if (n%4) {
			cout << "NO" << "\n";
			continue;
		}
		cout << "YES" << "\n";
		int tot=0;
		for (int i = 1; i <= n/2; i++) {
			cout << i*2 << " ";
			tot+=i*2;
		}
		for (int i = 0; i < n/2-1; i++) {
			cout << i*2+1 << " ";
			tot-=(i*2+1);
		}
		cout << tot << "\n";
	}
	return 0;
}
