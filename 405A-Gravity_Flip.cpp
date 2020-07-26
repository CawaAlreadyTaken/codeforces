#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 10000
 
int main() {
	int n; cin >> n;
	int p[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort (p, p+n); 
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}
	return 0;
}
