#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main () {
	int n; cin >> n;
	int ris = 0, a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (b-a > 1) ris++;
	}
	cout << ris << "\n";
	return 0;
}
