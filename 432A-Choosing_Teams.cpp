#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	int k; cin >> k;
	int v[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int conto = 0;
	int ris = 0;
	for (int i = 0; i < n; i++) {
		if (v[i]<=5-k) {
			conto++;
		}
	
		if (conto==3) {
			conto = 0;
			ris++;
		}
	}
	cout << ris << "\n";
	return 0;
}
