#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	int a, b;
	int m=0, c=0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a > b) m++;
		else if (b > a) c++;
	}
	if (m==c) {
		cout << "Friendship is magic!^^" << "\n";
		return 0;
	}
	cout << (m>c? "Mishka" : "Chris") << "\n";
	return 0;
}
