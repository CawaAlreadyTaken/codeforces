#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int t; cin  >> t;
	int a, b;
	while (t--) {
		cin >> a >> b;
		cout << (a%b? b-(a%b) : 0) << "\n";
	}
	return 0;
}
