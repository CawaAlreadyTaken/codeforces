#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 10000
 
int main() {
	int a[4], d; 
	for (int i = 0; i < 4; i++) cin >> a[i];
	cin >> d;
	bool flag = true;
	int u = 0;
	for (int i = 1; i <= d; i++) {
		for (int j = 0; j < 4; j++) {
			if (!(i%a[j])) {
				flag = false;
			}
		}
		if (flag) u++;
		flag = true;
	}
	cout << d-u << "\n";
	return 0;
}
