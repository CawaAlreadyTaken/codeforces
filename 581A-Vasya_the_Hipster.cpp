#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int a, b; cin >> a >> b;
	int ris1=0, ris2=0;
	ris1+=min(a, b);
	ris2+=(a>b? (a-b)/2 : (b-a)/2);
	cout << ris1 << " " << ris2 << "\n";
	return 0;	
}
