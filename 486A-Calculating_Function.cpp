#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 10000
 
int main() {
	ll n; cin >> n;
	cout << (n%2? -((n+1)/2) : n/2) << "\n";
	return 0;
}
