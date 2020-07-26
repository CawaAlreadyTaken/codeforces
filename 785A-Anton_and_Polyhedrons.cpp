#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n; cin >> n;
	int ris = 0;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s=="Tetrahedron") {
			ris+=4;
		} else if (s=="Cube") {
			ris+=6;
		} else  if (s=="Octahedron") {
			ris+=8;
		} else if (s=="Dodecahedron") {
			ris+=12;
		} else if (s=="Icosahedron") {
			ris+=20;
		}
	}
	cout << ris << "\n";
	return 0;
}
