#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	int a;
	int c = 0;
	int ris = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		c+=a;
		if (c<0) {
			ris++;
			c = 0;
		}
	}
	cout << ris << "\n";
	return 0;	
}
