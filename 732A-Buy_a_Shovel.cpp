#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int k, r; cin >> k >> r;
	k%=10;
	for (int t = 1; t <= 10; t++) {
		if ((k*t)%10==0||(k*t)%10==r) {
			cout << t << "\n";
			break;
		}
	}
	return 0;
}
