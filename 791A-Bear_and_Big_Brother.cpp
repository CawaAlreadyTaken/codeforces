#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
	int a, b; cin >> a >> b;
	int ris = 0;
	while(true) {
		ris++;
		a*=3;
		b*=2;
		if (a > b) {
			cout << ris << "\n";
			return 0;	
		}
	}
}
