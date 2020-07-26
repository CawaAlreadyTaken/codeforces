#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int t; cin >> t;
	int n;
	while(t--) {
		cin >> n;
		int h;
		for (int i = 1; i < n; i++) {
			h = pow(2, i+1)-1;
			if (!(n%h)) {
				cout << n/h << "\n";
				break;
			}
		}
	}
	return 0;	
}
