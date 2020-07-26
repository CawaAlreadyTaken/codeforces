#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TANTO 1e9
#define poco -1e9

int main() {
	int n; cin >> n;
	if (n>=0) {
		cout << n << "\n";
		return 0;
	} else {
		cout << -min(abs(n)/10, (abs(n)/100)*10+abs(n)%10) << "\n";
	}
	return 0;
}
