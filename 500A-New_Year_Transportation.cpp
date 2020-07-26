#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
bool visitati[10000];
 
int main() {
	int n, t; cin >> n >> t;
	int a[n-1];
	for (int i = 0; i < n-1; i++) cin >> a[i];
	int c = 0;
	while(c<n-1) {
		c+=a[c];
		if (c==t-1) {
			cout << "YES" << "\n";
			return 0;	
		}
	}
	cout << "NO" << "\n";
	return 0;	
}
