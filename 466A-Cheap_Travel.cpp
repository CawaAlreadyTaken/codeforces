#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n, m, a, b; cin >> n >> m >> a >> b;
	int ris = 0;
	while (n>0) {
		if (n>=m) {
			if (b/m<a) {
				ris+=b;
				n-=m;
			} else {
				ris+=n*a;
				n = 0;		
			}
		} else {
			if (b<n*a) {
				ris+=b;
				n = 0;
			} else {
				ris+=a*n;
				n = 0;
			}
		}
	}
	cout << ris << "\n";
	return 0;	
}
