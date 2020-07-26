#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int alfabeto[26];
 
int main() {
	int t; cin >> t;
	int n;
	while(t--) {
		cin >> n;
		cout << (n%2? n/2 : n/2-1) << "\n";
	}
	return 0;	
}
