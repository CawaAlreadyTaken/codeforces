#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
	int n; cin >> n;
	if (n%47&&n%4&&n%7&&n%74&&n%477&&n%744&&n%474&&n%747) cout << "NO" << "\n";
	else cout << "YES" << "\n";
	return 0;
}
 
