#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int ris=0;
	if (a==b||a==c||a==d) {
		a=-1;
		ris++;
	}
	if (b==c||b==d) {
		b=-2;
		ris++;
	}
	if (c==d) ris++;
	cout << ris << "\n";
	return 0;
}
