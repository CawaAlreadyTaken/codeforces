#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	char a;
	int ris = 0;
	set <char> s;
	while(1) {
		cin >> a;
		if (a=='}') {
			cout << ris << "\n";
			return 0;
		} else if (a<='z'&&a>='a') {
			if (s.find(a)==s.end()) {
				ris++;
				s.insert(a);
			}
		}
	}
	return 0;
}
