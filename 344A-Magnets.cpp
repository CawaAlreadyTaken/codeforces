#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int n; cin >> n;
	int a;
	int c;
	cin >> c;
	int k = 0;
	int m = 0;
	for (int i = 1; i < n; i++) {
		cin >> a;
		if (a==c) k++;
		else m++;
		c = a;
	}
	cout << m+1 << "\n";
	return 0;
}
