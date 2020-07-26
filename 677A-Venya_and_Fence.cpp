#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int n, h; cin >> n >> h;
	int ris = n;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > h) ris++;
	}
	cout << ris << "\n";
	return 0;
}
