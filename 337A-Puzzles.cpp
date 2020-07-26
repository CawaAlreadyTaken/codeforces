#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 10000
 
int main() {
	int n, m; cin >> n >> m; //n=2, m=10
	int f[m];
	for (int i = 0; i < m; i++) {
		cin >> f[i];
	}
	sort(f, f+m);
	int mn = TANTO;
	for (int i = 0; i < m-n+1; i++) {
		if (f[i+n-1]-f[i] < mn) mn = f[i+n-1] - f[i];
	}
	cout << mn << "\n";
	return 0;
}
