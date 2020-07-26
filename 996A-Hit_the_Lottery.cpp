#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	int ris = 0;
	ris+=n/100;
	n%=100;
	ris+=n/20;
	n%=20;
	ris+=n/10;
	n%=10;
	ris+=n/5;
	n%=5;
	ris+=n;
	cout << ris << "\n";
	return 0;	
}
