#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int n; cin >> n;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a) {
			cout << "HARD" << "\n";
			return 0;
		}
	}
	cout << "EASY" << "\n";
	return 0;
}
