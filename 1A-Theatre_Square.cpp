#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
	ll n, m, a; cin >> n >> m >> a;
	ll x = 0, y = 0;
	if (!(n%a)) x = n/a;
	else x = n/a+1;
	if (!(m%a)) y = m/a;
	else y = m/a+1;
	cout << (x*y) << "\n";
}
