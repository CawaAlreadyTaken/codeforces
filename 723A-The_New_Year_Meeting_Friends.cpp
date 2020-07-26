#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TANTO 1e9
#define poco -1e9

int main() {
	int a[3]; cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
	cout << a[2]-a[0] << "\n";
	return 0;	
}
