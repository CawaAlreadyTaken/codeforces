#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	int a; cin >> a;
	int d = a;
	int u = a;
	int ris = 0;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (a < d) {
			ris++;
			d = a;
		} else if (a > u) {
			ris++;
			u = a;
		}
	}
	cout << ris << "\n";
	return 0;
}
