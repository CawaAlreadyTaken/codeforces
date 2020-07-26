#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main () {
	int n; cin >> n;
	for (int i = n+1; i < 10000; i++) {
		if (i/1000!=(i/100)%10 && i/1000!=(i/10)%10 && i/1000!=i%10 && (i/100)%10!=(i/10)%10 && (i/100)%10!=i%10 && (i/10)%10!=i%10) {
			cout << i << "\n";
			return 0;
		}	
	}
	return 0;
}
