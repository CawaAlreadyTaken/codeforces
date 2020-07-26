#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int n, p[3];
ll cache[4001];
 
int r(int l) {
	if (l==0) return 0;
	else if (l < 0) return poco;
	if (cache[l]!=poco-100) return cache[l];
	else {
		int m = poco;
		for (int i = 0; i < 3; i++) {
			int a = 1+r(l-p[i]);
			//cout << l << " " << p[i] << " " << a  << endl;
			if (a > m) {
				m = a;
			}
		}
		cache[l] = m;
		return m;
	}
} 
 
int main() {
	cin >> n >> p[0];
	int k; cin >> k;
	if (k!=p[0]) p[1] = k;
	else p[1] = TANTO;
	cin >> k;
	if (k!=p[0]&&k!=p[1]) p[2] = k;
	else p[2] = TANTO;
	for (int i = 1; i <= n; i++) cache[i]=poco-100;
	sort(p, p+3);
	cout << r(n) << "\n";
	//cout << "\n";
	//cout << r(1);
 
	return 0;	
}
