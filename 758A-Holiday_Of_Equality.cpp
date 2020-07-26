#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	int b[n];
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(b, b+n);
	int ris = 0;
	for (int i = 0; i < n-1; i++) ris+=(b[n-1]-b[i]);
	cout << ris << "\n";
	return 0;	
}
