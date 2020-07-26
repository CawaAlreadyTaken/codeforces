#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
	int n; cin >> n;
	cout << (n%5? n/5+1 : n/5) << "\n";
	return 0;
}
