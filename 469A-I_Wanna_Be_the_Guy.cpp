#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 10000
 
int main() {
	int p; cin >> p;
	int a, b; cin >> a;
	bool x[p];
	int t;
	for (int i = 0; i < p; i++) x[i]=false;
	for (int i = 0; i < a; i++) {
		cin >> t;
		x[t-1] = true;
	}
	cin >> b;
	for (int i = 0; i < b; i++) {
		cin >> t;
		x[t-1] = true;
	}
	for (int i = 0; i < p; i++) {
		if (!(x[i])) {
			cout << "Oh, my keyboard!" << "\n";
			return 0;
		}
	}
	cout << "I become the guy." << "\n";
	return 0;
}
