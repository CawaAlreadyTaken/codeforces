#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int a, b; cin >> a >> b;
	cout << (min(a, b)%2? "Akshat" : "Malvika") << "\n";
	return 0;
}
