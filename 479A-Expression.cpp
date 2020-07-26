#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int b1 = b;
	bool flag = true;
	if (a==1&&b==1&&c==1) {
		cout << 3 << "\n";
		return 0;
	}
	if  (a==1) {
		b1++;
		flag = false;
	}
	if (c==1) {
		b1++;
		flag = false;
	}
	if (b==1&&flag) {
		if (a>c) c++;
		else a++;
	}
	b = b1;
	cout << a*b*c << "\n";
	return 0;
}
