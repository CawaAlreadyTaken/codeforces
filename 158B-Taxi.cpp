#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
	int n; cin >> n;
	int q = 0, t = 0, d = 0, u = 0;
	int a;
	int ris = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a>3) q++;
		else if (a>2) t++;
		else if (a>1) d++;
		else u++;
	}
	ris+=q;
	ris+=t; u-=t;
	if (d%2) {
		ris+=d/2+1;
		u-=2;
	} else ris+=d/2;
 
	if (u>0) {
		if (u%4) ris+=u/4+1;
		else ris+=u/4;
	}
	cout << ris << "\n";
	return 0;
}
