#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
ll n; 
ll cache[100001];
 
int main() {
	cin >> n;
	ll a[n];
	vector<pair<ll, ll> > v;
	for (ll i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	if (n==1) {
		cout << a[0] << "\n";
		return 0;
	}
	v.push_back({a[0], 1});
	for (ll i = 1; i < n; i++) {
		if (a[i]!=a[i-1]) v.push_back({a[i], 1});
		else v[v.size()-1].second++;
	}
	cache[0] = v[0].first*v[0].second;
	if (v[1].first-v[0].first == 1) {
		cache[1] = max(cache[0], v[1].first*v[1].second);
	} else {
		cache[1] = cache[0]+v[1].first*v[1].second;
	}
 
	for (ll i = 2; i < v.size(); i++) {
		if (v[i].first-v[i-1].first == 1) {
			cache[i] = max(cache[i-1], cache[i-2]+v[i].first*v[i].second);
		} else {
			cache[i] = cache[i-1]+v[i].first*v[i].second;
		}
	}
 
	cout << cache[v.size()-1] << "\n";
	return 0;	
}
