#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int t; cin >> t;
	while(t--) {
		int a, b; cin >> a >> b;
		cout << pow(max(min(a, b)*2, max(a, b)), 2) << "\n";
	}
	return 0;
}
