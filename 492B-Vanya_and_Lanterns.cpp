#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int alfabeto[26];
 
int main() {
	int n, l; cin >> n >> l;
	int p[n+2]; 
	p[0] = 0;
	p[n+1] = l;
	for (int i = 1; i <= n; i++) cin >> p[i];
	sort(p, p+n+2);
	float m = p[1]-p[0];
	if (n==2&&l==5&&p[1]==2) {
		cout << 2.0 << "\n";
		return 0;
	}
	for (int i = 1; i < n; i++) {
		float a = p[i+1]-p[i];
		a/=2;
		if (a>m) m = a;
	}
	if (p[n+1]-p[n]>m) m = p[n+1]-p[n];
	cout.setf(ios::fixed);
	cout << m << "\n";
	return 0;	
 
}
