#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int n, m; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	int ris = 0;
	if (sizeof(a)<sizeof(b)) {
		int h=0;
		for (int i = 0; i < n; i++) {
			for (int j = h; j < m; j++) {
				if (a[i]==b[j]-1||a[i]==b[j]||a[i]==b[j]+1) {
					ris++;
					h = j+1;
					break;
				}
			}
		}
	} else {
		int h=0;
		for (int i = 0; i < m; i++) {
			for (int j = h; j < n; j++) {
				if (b[i]==a[j]-1||b[i]==a[j]||b[i]==a[j]+1) {
					ris++;
					h = j+1;
					break;
				}
			}
		}
 
	}
	cout << ris << "\n";
	return 0;
}
