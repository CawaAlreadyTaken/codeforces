#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n, k; cin >> n >> k;
	int min = 240-k;
	int ris = 0;
	for (int i = 1; i <= n&&min>0; i++) {
		min-=5*i;
		if (min>=0) ris++;
	}
	cout << ris << "\n";
	return 0;
}
