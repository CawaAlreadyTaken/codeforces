#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int n; cin >> n;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	int v;
	for (int i = 1; i <= n; i++) {
		cin >> v;
		if (v==1) a.push_back(i);
		else if (v==2) b.push_back(i);
		else c.push_back(i);
	}
	int h = min(min(a.size(), b.size()), c.size());
	cout << h << "\n";
	for (int i = 0; i < h; i++) {
		cout << a[i] << " " << b[i] << " " << c[i] << "\n";
	}
	return 0;
}
