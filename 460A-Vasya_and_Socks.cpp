#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n, m; cin >> n >> m;
	int g = 0;
	for (int i = 0; i < n; i++) {
		g++;
		if (!(g%m)) i--;
	}
	cout << g << "\n";
	return 0;	
}

