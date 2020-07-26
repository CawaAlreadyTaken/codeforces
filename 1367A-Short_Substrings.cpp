#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	string a;
	while(n--) {
		cin >> a;
		string b = "";
		b+=a[0];
		if (a.length()==1||a.length()==2) {
			cout << a << "\n";
			continue;
		} else {
			bool flag = true;
			for (int i = 1; i < a.length()-1; i++) {
				if (i%2) b += a[i];
			}
			b += a[a.length()-1];
		}
		cout << b << "\n";
	}
	return 0;
}
