#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
bool isPrime(int n) {
	for (int i = 2; i*i <= n; i++) {
		if (!(n%i)) return false;
	}
	return true;
}
 
int main() {
	int n; cin >> n;
	for (int i = n-2; i>3; i--) {
		if (!isPrime(i)) {
			if (!isPrime(n-i)) {
				cout << i << " "<< n-i << "\n";
				return 0;	
			}
		}
	}
	//cout << (isPrime(n)? "si" : "no");
	return 0;	
}
