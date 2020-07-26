#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int ris = 0;
	int n; cin >> n;
	int h[n], a[n];
	for (int i = 0; i < n; i++) cin >> h[i] >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (h[i]==a[j]) ris++;
		}
	}
	cout << ris << "\n";
	return 0;
}
