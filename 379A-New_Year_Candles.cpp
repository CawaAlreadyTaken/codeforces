#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int a, b; cin >> a >> b;
	int ris = 0;
	for (int i = 1; i <= a; i++) {
		ris++;
		if (!(i%b)) {
			a++;
		}
	}
	cout << ris << "\n";
	
	return 0;
}
