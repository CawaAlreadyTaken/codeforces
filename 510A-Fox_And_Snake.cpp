#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define TANTO 1e9
#define poco -1e9
 
int main() {
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!(i%2)) cout << "#";
			else cout << ((j==m-1&&!((i-1)%4))||(j==0&&!((i+1)%4))? "#" : ".");
		}
		cout << "\n";
	}
	return 0;	
}
