#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 10000
 
int main() {
	double n; cin >> n;
	double a;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum+=a;
	}
	cout << sum/n << "\n";
	return 0;
}
