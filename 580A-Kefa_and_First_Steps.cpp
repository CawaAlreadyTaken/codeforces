#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
int main() {
	int n; cin >> n;
	int p=TANTO;
	int d;
	int ora = 0;
	int mas = 1;
	for (int i = 0; i < n; i++) {
		cin >> d;
		if (d>=p) ora++; 
		else ora = 1;
		if (ora > mas) mas = ora;
		p = d;
	}
	cout << mas << "\n";
	return 0;
}
